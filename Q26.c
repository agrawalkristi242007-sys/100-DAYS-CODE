/*Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n.*/
#include <stdio.h>

int main() 
{
      printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i,n;

  
    printf("Enter a positive number: ");
    scanf("%d", &n);

    
    printf("Numbers from 1 to %d: ", n);
    for(i = 1; i <= n; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");
     getch();
    return 0;
}
