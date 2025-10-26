/*Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

#include <stdio.h>

int main() 
{
      printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num > 0) 
    {
        printf("%d is positive.\n", num);
    } else {
        if (num < 0) {
            printf("%d is negative.\n", num);
        } else {
            printf("The number is zero.\n");
        }
    }
   getch();
    return 0;
}
