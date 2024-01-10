#include<stdio.h>
int main()
{
	int no1,no2,ans;
	char ch;

	
	
	
	printf("\nEnter + For + \nEnter 2 For - \nEnter 3 For * \nEnter 4 For / \nEnter 5 For Modulo");
	
	printf("\n\nEnter Your Choice :\t");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			printf("Enter number 1 :\t");
	scanf("%d",&no1);
	printf("\nEnter number 2 :\t");
	scanf("%d",&no2);
		ans=no1+no2;
		printf("%d",ans);
		break;
		case '-':
			printf("Enter number 1 :\t");
	scanf("%d",&no1);
	printf("\nEnter number 2 :\t");
	scanf("%d",&no2);
		ans=no1-no2;
		printf("%d",ans);
		break;
		case '*':
			printf("Enter number 1 :\t");
	scanf("%d",&no1);
	printf("\nEnter number 2 :\t");
	scanf("%d",&no2);
		ans=no1*no2;
		printf("%d",ans);
		break;
		case '/':
			printf("Enter number 1 :\t");
	scanf("%d",&no1);
	printf("\nEnter number 2 :\t");
	scanf("%d",&no2);
		ans=no1/no2;
		printf("%d",ans);
		break;
		case '%':
			printf("Enter number 1 :\t");
	scanf("%d",&no1);
	printf("\nEnter number 2 :\t");
	scanf("%d",&no2);
		ans=no1%no2;
		printf("%d",ans);
		break;
		default:
			printf("Enter Valid Choice");
			break;
	}
	return 0;
}
