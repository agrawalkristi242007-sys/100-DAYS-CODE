#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() 
{
 printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    enum Traffic signal;
    printf("Enter signal (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &signal);

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");
    else
        printf("Invalid signal\n");
   getch();
    return 0;
}
