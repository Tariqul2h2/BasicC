#include<stdio.h>
// we are going to write a program that may find out the average
// of 5 given integers
int main() // take care about brackets
{
    int i,n,k,sum=0; // declaration of variables
    for(i=1;i<6;i++) // like (initialization;condition;control)
    {
        scanf("%d",&n);  // you have to take one integer at a time
    // take care about "&" sign while your are taking input from console
    sum=sum+n;
    }
    printf("The average of 5 numbers is = %.2f",(float)sum/5);
    // (float) this is called type casting
    return 0;
}
