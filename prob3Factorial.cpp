#include<stdio.h>
int fact(int num)
{
    if(num == 0)
        return 1;
    if(num == 1)
        return 1;
    return num*fact(num-1);
}

int main()
{
    /**
    int num, fact = 1,i;
    scanf("%d", &num);
    for(i = 1; i<=num; i++)
    {
        fact = fact*i;
    }
    printf("%d! = %d", num, fact);

    */
        /*** with recursion***/
    int number;
    scanf("%d", &number);
    printf("%d! = %d", number, fact(number));

}
