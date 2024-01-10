#include <stdio.h>

int main()
{
    int num1,num2;
    int *a = &num1;  
    int *b = &num2;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);

    printf("Before Swapping: num1 is: %d, num2 is: %d\n",*a,*b);
    
    	*a=*a+*b;   
		*b=*a-*b;   
		*a=*a-*b;
    
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",*a,*b);

    return 0;
}
