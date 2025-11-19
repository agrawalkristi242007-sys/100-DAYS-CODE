#include <stdio.h>

int main() 
{
   printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n;
    scanf("%d", &n);

    int arr[n], visited[n];
    
    for(int i = 0; i < n; i++)
        visited[i] = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }

    return 0;
}
