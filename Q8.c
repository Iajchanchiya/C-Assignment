#include<stdio.h>
int main()
{
	int mark1,mark2,mark3,mark4,mark5,total,per,avg;
	
	printf("Enter Students Sub1's Marks:");
	scanf("\t%d",&mark1);
	printf("\nEnter Students Sub2's Marks:");
	scanf("\t%d",&mark2);
	printf("\nEnter Students Sub3's Marks:");
	scanf("\t%d",&mark3);
	printf("\nEnter Students Sub4's Marks:");
	scanf("\t%d",&mark4);
	printf("\nEnter Students Sub5's Marks:");
	scanf("\t%d",&mark5);
	
	printf("\nStudents Sub1's Marks Is: %d",mark1);
	printf("\nStudents Sub2's Marks Is: %d",mark2);
	printf("\nStudents Sub3's Marks Is: %d",mark3);
	printf("\nStudents Sub3's Marks Is: %d",mark4);
	printf("\nStudents Sub3's Marks Is: %d",mark5);
	
	total=mark1+mark2+mark3+mark4+mark5;
	per=total*100/500;

	
	printf("\n\n====================================================================");
	printf("\nSub1\tSub2\tSub3\tSub4\tSub5\tTotal\tPer");
	printf("\n====================================================================");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d",mark1,mark2,mark3,mark4,mark5,total,per);
	printf("\n====================================================================");
}
