#include <stdio.h>
#include <windows.h>

    int main()
    {
        int x;

        for (x = 0; x<2; x++)
        {
            Beep(523,500); // Jingle
            printf("\tJingle");
        }

        Beep(523,800);  // Bell
        printf("\tBell");

        Sleep(200);

        for (x = 0; x<2; x++)
        {
            Beep(523,500); // Jingle
            printf("\tJingle");
        }

        Beep(523,800);  // Bell
        printf("\tBell");

        Sleep(200);

        Beep(523,500); // Jin
        printf("\tJingle");

        Sleep(50);

        Beep(659,400); // gle

        printf("\tGle");

        Sleep(50);

        Beep(440,400); //  all
        printf("\tAll");

        Sleep(50);

        Beep(494,400); //  the
        printf("\tThe");

        Sleep(50);

        Beep(523,750);  // way
        printf("\tway");

        Sleep(400);

        Beep(600, 400); // oh
        printf("\toh");

        Sleep(100);

        Beep(600, 350); // what
        printf("\tWhat");

        Sleep(200);

        Beep(600,300); // fun
        printf("\tFun");

        Sleep(150);

        Beep(600,250); // it
        printf("\tIt");

        Sleep(150);

        Beep(600,150); // is
        printf("\tis");

        Sleep(150);

        Beep(550,250); // to
        printf("\tTo");

        Sleep(150);

        Beep(555,350); // ride
        printf("\tRide");

        Sleep(50);

        Beep(555,200); // in
        printf("\tIn");

        Sleep(150);

        Beep(555,200); // a
        printf("\tA");

        Sleep(150);

        Beep(690,200); // one
        printf("\tOne");

        Sleep(150);

        Beep(690, 200); // horse
        printf("\tHorse");

        Sleep(150);

        Beep(610, 200); // o
        printf("\tO");

        Sleep(150);

        Beep(535, 160); // pen
        printf("\tPen");

        Sleep(100);

        Beep(500, 150); // sleigh
        printf("\tSleigh");

        Beep(500, 50); // sleigh
        printf("\tSleigh");


        Sleep(200);

        Beep(700, 200); // yeah
        printf("\tYeah");



    return 0;
}
