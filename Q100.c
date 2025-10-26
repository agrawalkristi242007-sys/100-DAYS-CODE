#include <stdio.h>
#include <string.h>

int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') length++;

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf(",");
        }
    }
    getch();
    return 0;
}
