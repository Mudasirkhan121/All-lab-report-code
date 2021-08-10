#include<stdio.h>
void main()
{

  	 
	printf("Programmer Name : MUDASIR KHAN\nRegistration No : 20MDELE121\n\n");

    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z')
    {
    	ch = ch - 32;
    	printf("The UpperCase Alphabet is : %c",ch);
	}
	
	else if(ch>='A' && ch<='Z')
	{
		ch = ch + 32;
		printf("The LowerCase Alphabet is : %c",ch);
	}
	
	else
	printf("You entered invalid character...");

}                           //End of Main



