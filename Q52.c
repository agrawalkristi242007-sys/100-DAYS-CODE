/*Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>

int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i, j;
    int groups[] = {1, 3, 5, 3, 1}; 
    int n = 5; 

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < groups[i]; j++) 
        {
            printf("*\n");
        }
        printf("\n"); 
    }
    getch();
    return 0;
}
