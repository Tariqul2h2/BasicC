#include<stdio.h>
// basically there are three types of loops.
// 1. for loop
// 2. while loop
// 3. do while loop
// we are going to focus on for loop and while loop only
int main()  // take care about these two brackets
{
    int i,j,k; // declaration of variable
     /********* For loop *********/
     // count and print 1 to 10 using for loop
     // expression of for loop:
                // for(initialization ; conditions ; control){}
                // keep in mind you have to use 2 semicolons as a must
    for(i=1;i<11;i++) //  i<11 or i<=10 , i++ means, i=i+1
    { //  if you start a bracket then immediately close it
       printf("%d   ",i); // the value of i can be seen using the
                        // integer expression %d
                        // printf executes from right to left
    }
    printf("\n");
    /********** While loop *********/
    // same program, about to print from 1 to 10
    // expression while lopp:
                // while(conditions){}
    i=1;// initialization just like for loop
    while(i<=10) // or i<11, condition same as for loop
    {
        printf("%d   ",i);
        i++; // control

    }
    return 0; // because main is returning integer so return integer is needed
}
