#include <stdio.h>
int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n"); 
    int m, n, flag = 1;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    if (m != n)
        flag = 0;
    else {
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (matrix[i][j] != matrix[j][i]) 
                {
                    flag = 0;
                    break;
                }
            }
            if (!flag) break;
        }
    }
    if (flag)
        printf("True");
    else
        printf("False");
   getch();
    return 0;
}
