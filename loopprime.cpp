#include<stdio.h>
int main()
{
    unsigned long long int n = 1,flag = 0, i;
    while(n != 18446744073709551616)
    {
        for(i=2; i<=n/2; i++)
        {
            if(n%i == 0)
                flag = 1;
        }
        if(flag != 1)
            printf("%lld ",n);
        flag = 0;
        n++;
    }
}
