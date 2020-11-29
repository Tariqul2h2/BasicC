#include<stdio.h>
// introduction to array
int main() // be careful about these two brackets
{
    int a[10];
    /*  The name of this array is "a";
        it is an integer type array;
        it can hold up to 10 elements;
        size in ram = 10 * sizeof*(int) = 10*4 =40
        lower bound = 0;
        upper bound = 9; */
    int n;
    printf("How many values do you wanna input?");
    scanf("%d",&n);

    /*****  now taking inputs from keyboard *****/
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // 10,20,30,40,50
        /*
        a[0] = 10, a[1] = 20, a[2] = 30, a[3] = 40, a[4] = 50
               lowerbound             upper bound
        index    0     1    2    3     4
        value   10    20   30   40    50
        */
    }
    /****  showing output of this array ****/
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
