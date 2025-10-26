#include <stdio.h>
int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char str[1000], ch;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);
    int count = 0, i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
    }
    printf("%d", count);
    getch();
    return 0;
}
