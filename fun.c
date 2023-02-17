#include<stdio.h>
void add();
void mul();
void sub();
void div();
void rem();
int main()

{

    add();
    mul();
    sub();
    div();
    rem();
    

    return 0;
}
void add()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    c=a+b;

    printf("Enter value of sum %d \n",c);
}
void mul()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    c=a*b;

    printf("Enter value of mul = %d \n",c);
}
void sub()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    c=a-b;

    printf("Enter value of sub =%d\n",c);
}

void div()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    c=a/b;

    printf("Enter value of sub =%d\n",c);
}
void rem()
{
    int a,b,c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    c=a%b;

    printf("Enter value of sub =%d\n",c);
}