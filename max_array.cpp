#include<stdio.h>
int main()
{
    int i,n;
    int a[10];

    printf("How many values do you wanna input?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int maximum = a[0],index=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=maximum)
        {
            maximum = a[i];
            index=i;
        }
    }
    printf("%dth index with value %d is the maximum number",index,maximum);
    return 0;
}
