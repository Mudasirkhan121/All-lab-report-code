#include <stdio.h>             //library of the program
#include<string.h>            //library of the program
void main()                  //main function of the program
{
	printf("Programmer Name : MUDASIR KHAN\nRegistration No : 20MDELE121\n\n");
	int i, length, flag=0;       //Declaration of i, length, and flag
	char mus[30];                //Declaration of mus
	
	printf("Enter your String : ");
	scanf("%s",&mus);                //Read mus using scanf command
	
	length=strlen(mus);
	
	for(i=0;i<length;i++)         //using for_loop
	{
		if(mus[i]>=65 && mus[i]<=90)   //using if_else_if
		{
			mus[i]=mus[i]+32;
			flag=0;
		}
		else if(mus[i]>=97 && mus[i]<=122)
		{
			mus[i=mus[i]-32];
			flag=1;
		}
	}
	printf("\n\tYour String in Opposite Case is : %s\n\n",mus);
	
}                                              //End of main



