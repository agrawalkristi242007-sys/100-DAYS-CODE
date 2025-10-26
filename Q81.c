#include <stdio.h>
int main() 
{
      printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    printf("%d", count);
    getch();
    return 0;
}
