#include<stdio.h>
int main()
{
    char str[100];
    int len = 0, l;
    scanf("%s",str);
    while(str[len] != '\0')
        len++;
    for(l = len - 1; l >= 0; l--)
        printf("%c",str[l]);
}
