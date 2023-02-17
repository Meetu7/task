/*c program to display all alphabets from a-z using ascii value*/
#include<stdio.h>
int main()
{

    int i;

    printf("Alphabets form a-z are :: \n");

    for(i=97;i<=122;i++)
    {
        printf("%c\n",i);
    }
    return 0;
}