#include<unistd.h>
#include<stdio.h>
#include<stdbool.h>
#include<signal.h>
#include<stdlib.h>
#include<windows.h>



#ifndef MACRO_H_
# define MACRO_H_

# define LENGTH_POMODORO	25	//Duration of one pomodoro
# define LENGTH_SHORT_BREAK	5	//Duration of a short break
# define LENGTH_LONG_BREAK	15	//Duration of a long break
# define NBR_POM_LONG_BREAK	4	//Number of pomodori before a long break

#endif /* MACRO_H_ */

void sig_h(int sig)
{
    (void)sig;
    printf("\nGood Bye !\n");
    exit(0);
}
void end_check(bool *is_break, int *count_p, bool *is_lb)
{
    if ((*is_break))
        *is_break = false;
    else if (!(*is_break) && (*count_p) % NBR_POM_LONG_BREAK == 0)
    {
        printf("Good job, long break time !\n");
        (*is_break) = true;
        (*is_lb) = true;
        (*count_p)++;
    }
    else
    {
        printf("\nBreak time !\n");
        (*is_break) = true;
        (*is_lb) = false;
        (*count_p)++;
    }
}

void main_loop(int *min, int *sec)
{
    while ((*min) >= 0)
    {
        while ((*min) >= 0 && (*sec) >= 0)
        {
            printf("Time Remains:  ");
            if ((*min) < 10)
                printf("0");
            printf("%d:", (*min));
            if ((*sec) < 10)
                printf("0");
            printf("%d...", (*sec));
            fflush(stdout);
            putchar('\r');
            Sleep(1000);
            fflush(stdout);
            (*sec)--;
        }
        *sec = 59;
        (*min)--;
    }
}

int	main(int ac, char **av)
{
    int	min;
    int	sec = 59;
    int	count_p = 1;
    bool is_break = false;
    bool is_lb = false;

    (void)ac;
    (void)av;
    while (true)
    {
        signal(SIGINT, sig_h);
        if (!is_break)
            printf("\nWorking ! Pomodoro %d !\n", count_p);
        if (is_break && is_lb)
            min = LENGTH_LONG_BREAK - 1;
        else if (is_break)
            min = LENGTH_SHORT_BREAK - 1;
        else
            min = LENGTH_POMODORO - 1;
        main_loop(&min, &sec);
        putchar('\n');
        printf(" ");
        fflush(stdout);
        Beep(659,400); // gle

        //system("beep -l 100 -f 400 -D 200 -n -l 100 -f 400");
        end_check(&is_break, &count_p, &is_lb);
    }
    return (EXIT_SUCCESS);
}
