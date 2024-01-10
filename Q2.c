#include<stdio.h>
int main()
{
	int no1,no2,add,sub,mul,div;
	
	printf("Enter Number 1 :\t");
	scanf("%d",&no1);
	printf("\nEnter Number 1 :\t");
	scanf("%d",&no2);
	
	add=no1+no2;
	sub=no1-no2;
	mul=no1*no2;
	div=no1/no2;
	
	printf("\nAddition is :\t%d",add);
	printf("\n\nSubtraction is :\t%d",sub);
	printf("\n\nMultiplication is :\t%d",mul);
	printf("\n\nDivision is :\t%d",div);
	
	return 0;
}
