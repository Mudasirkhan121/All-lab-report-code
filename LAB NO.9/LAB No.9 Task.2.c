#include<stdio.h>

void main()
{
	
	printf("Programmer Name : MUDASIR KHAN\nRegistration No :20MDELE121\n\n");
	
	char ch;                                    //Declaration of character
	printf("plz enter a character Variable : ");
	scanf("%c",&ch);                             //Read character from user 
	
	if('a'<=ch && ch<='z' || 'A'<=ch && ch<='Z') //Using ASCII Codes a to z 97 to 122 and A to Z 65 to 90.
	printf("The entered ch %c is an Alphabet",ch);
	else if(48<=ch && ch<=57)          //Using ASCII codes 0 t0 9 => 48 to 57.
	printf("The entered ch %c is a number",ch);
	else
	printf("You entered invalide character");	
}           //End of main block
