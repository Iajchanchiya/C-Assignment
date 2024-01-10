#include<stdio.h>
int main()
{
	int num[5],sum;
	
	printf("Enter Value");
	scanf("%d",&num[0]);
	printf("Enter Value");
	scanf("%d",&num[1]);
	printf("Enter Value");
	scanf("%d",&num[2]);
	printf("Enter Value");
	scanf("%d",&num[3]);
	printf("Enter Value");
	scanf("%d",&num[4]);
	sum=num[0]+num[1]+num[2]+num[3]+num[4];
	
	printf("%d",sum);
	return 0;
}
