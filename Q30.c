/*Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.*/
#include <stdio.h>

int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int num, reversed = 0, remainder;

    
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 
    
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

   
   
    printf("Reversed number of %d is %d\n", original, reversed);
   getch();
    return 0;
}

