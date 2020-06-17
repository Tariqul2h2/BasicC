#include<stdio.h>
int main()
{
    int n, prm, flag = 0, i, j;
    while(true)
    {
        scanf("%d", &n);
        for(i=2; i<=n/2; i++)
        {
            if(n%i == 0)
                flag = 1;
        }
        if(flag == 1)
            printf("Not Prime\n");
        else
            printf("Prime\n");
        flag = 0;
    }
}
