#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("before swap a is %d and b is %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nafter swap a is %d and b is %d",a,b);
	return 0;
}
