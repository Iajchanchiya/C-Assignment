#include<stdio.h>
int main(){
	char str1[100];
	char str2[100];
	int i;
	printf("enter your first string : ");
	scanf("%s",&str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("%s is your second string",str2);
	return 0;
}
