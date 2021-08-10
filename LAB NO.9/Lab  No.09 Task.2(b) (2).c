#include<stdio.h>

void main()
{

  	 
	printf("Programmer Name : MUDASIR KHAN\nRegistration No : 20MDELE121\n\n");
	
	char ch;
	printf("plz enter a character:\n");
	scanf("%c",&ch);
	
	if(isalpha(ch)!=0)
	printf("The character %c is an Alphabet",ch);
	else if(isdigit(ch)!=0)
	printf("The character %c is a number",ch);
	else
	printf("you entered invalid character");

}                                                                   //End of Main


