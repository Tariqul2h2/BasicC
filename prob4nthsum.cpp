#include<stdio.h>
int main()
{
    int n, sum = 0,i;
    scanf("%d", &n);
///    using formula
///    sum = ((n*(n+1))/2);
///    printf("Sum of till %d is %d", n, sum);
///Using loop

    for(i = 1; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("%d", sum);
}
