#include <stdio.h>
int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");

    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++;
    }
    printf("%s", str);
    getch();
    return 0;
}
