#include <stdio.h>

int main() 
{
   printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    int n, target;
    int i;
    scanf("%d", &n);   
    
    int nums[n];
    
    for( i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);   
    }
    
    scanf("%d", &target);      
    
    for( i = 0; i < n; i++) 
    {
        for( j = i + 1; j < n; j++) 
        {
            if(nums[i] + nums[j] == target) 
            {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    
    
    printf("-1 -1");
    return 0;
}
