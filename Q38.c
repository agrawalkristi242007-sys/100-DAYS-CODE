/*Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.*/
#include <stdio.h>
int main() 
{
      printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    while (n > 0) {
        rem = n % 10;     
        sum = sum + rem;  
        n = n / 10;       
    }

    printf("Sum of digits = %d\n", sum);
    getch();
    return 0;
}
