#include<stdio.h>
int main()
{
    int n, arm = 0, rem, ns;
    scanf("%d", &n);
    ns = n;
    while(n != 0)
    {
        rem = n%10;
        //printf("Rem: %d\n",rem);
        arm = arm+ rem*rem*rem;
        //printf("Arm: %d\n",arm);
        n = n/10;
        //printf("N: %d\n",n);
    }
    if(ns == arm)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}
