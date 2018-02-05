#include <stdio.h>
#include<conio.h>
void main ()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d",addNumbers(num));
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        getch();
}
