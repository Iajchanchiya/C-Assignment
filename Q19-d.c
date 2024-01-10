#include<stdio.h>
int main()
{
	int i,value,fact=1;
	printf("\nEnter Value :\t");
	scanf("%d",&value);
	
	for(i=value;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\n%d is Factorial of %d",fact,value);
	return 0;
}
