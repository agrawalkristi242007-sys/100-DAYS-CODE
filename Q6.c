/*Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.*/
#include <stdio.h>

int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int a, b, temp;

   
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    getch();
    return 0;
}
