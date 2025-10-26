#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int start = 0, i = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            for (int j = i - 1; j >= start; j--)
                printf("%c", str[j]);
            if (str[i] == ' ')
                printf(" ");
            start = i + 1;
        }
        if (str[i] == '\0' || str[i] == '\n')
            break;
        i++;
    }
     getch();
    return 0;
}
