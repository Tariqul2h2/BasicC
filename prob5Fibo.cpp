#include<stdio.h>
int main()
{
    ///fibo = 0 1 1 2 3 5 8 13 ...
    long long n, fib = 0, fib1 = 1, i,fn = 3;
    scanf("%lld", &n);
    if(n == 1)
    {
        printf("%lld",fib);
    }
    if(n >= 2)
    {
        printf("%lld %lld",fib, fib1);
    }
    while(fn <= n)
    {
        i = fib+fib1;
        printf(" %lld",i);
        fib = fib1;
        fib1 = i;
        fn++;
    }
}
