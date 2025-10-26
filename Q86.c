#include <stdio.h>
int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n')
        length++;
    int flag = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");
        getch();
        return 0;
}
