/*Q114 (Logic Enhancers)
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main() 
{
    printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; 
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0, maxLen = 0;

    for (int end = 0; end < n; end++) {
        
        if (lastIndex[(int)s[end]] >= start)
            start = lastIndex[(int)s[end]] + 1;

        lastIndex[(int)s[end]] = end;

        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
