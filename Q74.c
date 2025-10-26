#include <stdio.h>
int main()
 {
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n], transpose[n][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
