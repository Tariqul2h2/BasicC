#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int a[100];

    printf("How many values do you wanna input?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    printf("the average of the number is %.2f",(float)sum/n);


    return 0;
}
