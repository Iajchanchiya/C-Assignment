#include<stdio.h>

int main()
{
 char str1[50], str2[50];
 int i, len=0;

 printf("Enter first string:\n");
 gets(str1);
 printf("Enter second string:\n");
 gets(str2);

 for(i=0;str1[i]!='\0';i++)
 {
  len++;
 }

 for(i=0;str2[i]!='\0';i++)
 {
  str1[len+i] = str2[i];
 }
 str1[len+i]='\0';
 printf("Concatenated string is: %s", str1);
 
 return 0;
}
