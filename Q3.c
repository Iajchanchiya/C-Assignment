#include<stdio.h>
int main()
{
	int value,square,cube;
	
	printf("Enter Value :\t");
	scanf("%d",&value);
	
	square=value*value;
	cube=value*value*value;
	
	printf("\n\nSquare of Value Is :\t%d",square);
	printf("\n\nCube of Value Is :\t%d",cube);
	
	return 0;
}
