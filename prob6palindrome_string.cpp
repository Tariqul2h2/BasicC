#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int len, rev = 0, i = 0;
    scanf(" %s", &str1);
    len = strlen(str1)-1;
    while(i<len)
    {
        if(str1[i++] != str1[len--])
            rev = 1;
    }
    if(rev == 1)
        printf("Not Palindrome");
    else
        printf("Palindrome");
}
