/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>

int main()
 {
            printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i, j;
    int n = 5; 

    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (2*i - 1); j++) { 
            printf("*");
        }
        printf("\n");
    }

    
    for (i = n-1; i >= 1; i--) 
    {
        for (j = 1; j <= (2*i - 1); j++) 
        { 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
