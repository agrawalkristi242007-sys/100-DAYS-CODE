/*Q7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable.*/
#include <stdio.h>
int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int a, b;

   
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    a = a + b;
    b = a - b;
    a = a - b;

   
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    getch();
    return 0;
}
