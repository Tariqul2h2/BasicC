#include<stdio.h>
int main()
{
    int rem = 0,rev, num, flag = 0;
    scanf("%d", &num);
    rev = num;
    while(num!=0)
    {
        rem = rem*10; ///reversing number
        rem = rem+num%10;
        num = num/10;
    }
    if(rev == rem)
    {
        flag = 1;
    }
    if(flag == 1)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
}
