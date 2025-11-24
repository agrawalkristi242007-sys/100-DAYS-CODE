#include <stdio.h>

enum Numbers { A = 10, B = 11, C = 12, D = 13, E = 14 };

int main() 
{
   printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Numbers n;

    for (n = A; n <= E; n++) {
        printf("%d\n", n);
    }
     getch();
    return 0;
}
