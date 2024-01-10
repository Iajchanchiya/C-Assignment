#include<stdio.h>
int main()
{
	int ch;
	
	printf("\nEnter 1 For Monday \nEnter 2 For Tuesday \nEnter 3 For Wednesday \nEnter 4 For Thursday \nEnter 5 For Friday \nEnter 6 For Saturday \nEnter 7 For Sunday");
	printf("\n Enter Your Choice :\t");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Enter Valid Choice");
			break;
	}
	
	
	return 0;
}
