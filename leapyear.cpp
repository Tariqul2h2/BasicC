#include<stdio.h>
int main()
{
    int y;
    while(true)
    {
        scanf("%d",&y);
        if(y % 400 == 0)
            printf("Leap Year\n");
        else if(y % 100 == 0)
            printf("Not Leap Year\n");
        else if(y % 4 == 0)
            printf("Leap Year\n");
        else
            printf("Not Leap Year\n");
    }
}
