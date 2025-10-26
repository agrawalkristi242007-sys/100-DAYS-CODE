/*Q48 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
1
12
123
1234
12345*/
#include <stdio.h>
int main()
 {
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int i, j;
    int n = 5; 

    for (i = 1; i <= n; i++) 
    {       
        for (j = 1; j <= i; j++) 
        {   
            printf("%d", j);
        }
        printf("\n"); 
    }
    getch();
    return 0;
}
