#include<stdio.h>
int main()
{
	int pr;
	
	printf("Enter Your Percentage :\t");
	scanf("%d",&pr);
	
	printf("\n\n Your Percentage Is :\t%d",pr);
	 if(pr>75){
	 	printf("\nDistinction");
	 }
	 else if(pr>60 && pr<=75){
	 	printf("\n\nFirst Calss");
	 }
	 else if(pr>50 && pr<=60){
	 	printf("\n\nSecond Class");
	 }
	 else if(pr<=50){
	 	printf("\n\nPass Class");
	 }
	 else if(pr<35 && pr>0){
	 	printf("\n\nFail");
	 }
	 else if(pr<0){
	 	printf("\n\nEnter valid pr");
	 }
	 else{
	 	printf("\n\nInvalid Input");
	 }
	return 0;
}
