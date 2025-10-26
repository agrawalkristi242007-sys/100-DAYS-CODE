#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n')
        length++;
    for (int i = length - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
    getch();
}
