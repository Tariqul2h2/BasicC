#include<stdio.h>
int main()
{
    int n, prm, flag = 0, i, j, low, upp, count = 0, tol = 0;
    printf("Please enter Lower Range: ");
    scanf("%d",&low);
    printf("Please enter Upper Range: ");
    scanf("%d",&upp);
    for(j = low; j<=upp; j++)
    {
        for(i=2; i<=j/2; i++)
        {
            if(j%i == 0)
                flag = 1;
        }
        if(flag != 1)
        {
            printf("%d ", j);
            count++;
        }
        flag = 0;
    }
    printf("\nTotal: %d",count);
}




