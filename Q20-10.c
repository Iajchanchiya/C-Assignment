#include<stdio.h>
int main()
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			temp++;
			printf(" %d",temp);
		}
		printf("\n");
	}
	return 0;
}
