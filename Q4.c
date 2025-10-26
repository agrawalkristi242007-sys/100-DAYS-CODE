/*Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
#define PI 3.14

int main() 
{
     printf("Name-KRISTI AGRAWAL \nSAP ID-590025883\ncourse-BSC-CS\nBATCH-B1\n");
	printf("\n--------------------------------\n");
    float radius, area, circumference;

    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

   
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    
    printf("\nArea of circle = %.2f", area);
    printf("\nCircumference of circle = %.2f\n", circumference);
    getch();
    return 0;
}
