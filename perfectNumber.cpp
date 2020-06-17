#include<stdio.h>
int main()
{
    int n, l = 0, i;
    scanf("%d",&n);
    printf("Divisors are: ");
    for(i = 1; i <= n/2; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            l = l+i;
        }
    }
    printf("\n");
    if(l == n)
        printf("%d is a Perfect Number",n);
    else
        printf("%d is not a Perfect Number",n);
}
