#include<stdio.h>
void add(no1,no2,ans)
{
	printf("\n\nEnter No1 :\t");
	scanf("%d",&no1);
	printf("\nEnter No2 :\t");
	scanf("%d",&no2);
	
	ans=no1+no2;
	
	printf("\nAddition is : \t%d",ans);
}
void sub(no1,no2,ans)
{
	printf("\n\nEnter No1 :\t");
	scanf("%d",&no1);
	printf("\nEnter No2 :\t");
	scanf("%d",&no2);
	
	ans=no1-no2;
	
	printf("\nSubstraction is : \t%d",ans);
}
void mul(no1,no2,ans)
{
	printf("\n\nEnter No1 :\t");
	scanf("%d",&no1);
	printf("\nEnter No2 :\t");
	scanf("%d",&no2);
	
	ans=no1*no2;
	
	printf("\nMultiplication is : \t%d",ans);
}
void div(no1,no2,ans)
{
	printf("\n\nEnter No1 :\t");
	scanf("%d",&no1);
	printf("\nEnter No2 :\t");
	scanf("%d",&no2);
	
	ans=no1/no2;
	
	printf("\nDivision is : \t%d",ans);
}
int main()
{
	char ch;
	printf("\nPress + for Addition \nPress - for Substractin  \nPress * for Multiplication \nPress / for Division");
	printf("\n\nPlease Enter Your Choice :\t");
	scanf("%c",&ch);
	
	switch(ch){
		case '+':
		{
			add();
			break;
		}
		case '-':
			{
				sub();
				break;
			}
		case '*':
			{
				mul();
				break;
			}
		case '/':
			{
				div();
				break;
			}
		default:
			{
				printf("Invalid Choice");
			}
	}
	
	
	
	
	
	return 0;
}
