#include <stdio.h>//Header File
int main()//It is the main function
{int i;//The declaration of variable i
for (i=1;i<101;i++)//Here executes a for loop.The structure of for loop is (initialization;condition;control statement)
{
    if (i%2!=0)//The condition to print the odd numbers
    {
        printf("%d\n",i);//It is the printf() function to print the numbers.
    }
}

    return 0;
}
