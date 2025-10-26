#include <stdio.h>
int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    int m, n, sum = 0;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    if (m == n) {
        for (int i = 0; i < m; i++)
            sum += matrix[i][i];
        printf("%d", sum);
    } else
        printf("Not a square matrix");
        getch();
    return 0;
}
