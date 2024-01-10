#include<stdio.h>
int main()
{
	int value,i,ans;
	
	printf("Enter Value :\t");
	scanf("%d",&value);
	for(i=1;i<=10;i++)
	{
		ans=value*i;
		printf("%d * %d = %d\n",value,i,ans);
	
	}
	
	return 0;
}
