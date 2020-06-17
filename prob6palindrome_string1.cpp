#include<stdio.h>
int main()
{
    char str[100];
    int len=0, length = 0, i = 0, flag = 0;
    scanf("%s",&str);
    while(str[len] != '\0') ///loop will run until the null value return
        len++; ///finding string length
    len = len - 1;
    while(i<len)
        if(str[i++] != str[len--])
            flag = 1;
    if(flag == 1)
        printf("Not Palindrome");
    else
        printf("palindrome");
}
