#include<stdio.h>
int main()
{
	int i,number,rem,ori,rev=0;
	printf("\nEnter Number :\t");
	scanf("%d",&number);
	ori=number;
	
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	printf("\nReverse of number is %d",rev);
	return 0;
}
