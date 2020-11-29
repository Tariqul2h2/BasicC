#include<stdio.h>
void add()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Summation is %d\n",c);
}
void sub()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("Subtraction is %d\n",c);
}
int main()
{
    int a,b;

    while(true)
    {
        printf("Press 1 for addition \nPress 2 for subtraction\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\nAdd:\n");
            add();
        }
        if(a==2)
        {
            printf("\nSub:\n");
            sub();
        }
    }
}
