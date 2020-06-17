#include<stdio.h>
int main()
{
    int num, flag1, flag2 ;
    printf("How many elements you want? ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("Please enter First element: ");
        scanf("%d", &flag1);
        num --;
        if(num > 0)
        {
            for(; num>0; num--)
            {
                printf("Please enter Next elements: ");
                scanf("%d",&flag2);
                if(flag1 < flag2)
                {
                    flag1 = flag2;
                }
            }
        }
    }
    printf("Max is %d", flag1);
}
