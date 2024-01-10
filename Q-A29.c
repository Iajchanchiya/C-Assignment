#include <stdio.h>  
  
int main() {  
    int num1;  
    int num2;  
    int *ptr1 = &num1;  
    int *ptr2 = &num2;  
    int sum;  
  	
  	printf("Enter Value Of Num1 : ");
  	scanf("%d",&num1);
  	printf("\nEnter Value Of Num2 : ");
  	scanf("%d",&num2);
  	
    sum = *ptr1 + *ptr2;  
  
    printf("\nSum of %d and %d is: %d\n", *ptr1, *ptr2, sum);  
  
    return 0;  
}  
