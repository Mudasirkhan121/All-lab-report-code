#include<stdio.h>
void main()
{ 	 
	printf("Programmer Name : MUDASIR KHAN\nRegistration No : 20MDELE121\n\n");
	
	int i, length, flag=0;
	char string[35];
	
	printf("Enter your string : ");
	scanf("%s",&string);
	
	length = strlen(string);
	printf("\n\tLength of the String is %d\n",length);
	
	for(i=0; i<length/2; i++)
	{
		if(string[i]!=string[length-1-i])
		flag=1;
	}
	
	if(flag==0)
	printf("\n\tYes Your String is Palindrome");
	
	else
	printf("\n\tNo Your String is not Palindrome");
  	
}                                                                   //End of Main


