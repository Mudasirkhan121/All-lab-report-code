#include<stdio.h>              //library of the program
#include<string.h>            //library of the program
void main()                  //main function of the program
{
	printf("Programmer Name : MUDASIR KHAN\nRegistration No : 20MDELE121\n\n");

	int i, length, j, count=0;   //Declaration of i,length, j, and count
	char vowel[]="aeiouAEIOU";   //Declaration of vowel
	char string[40];             //Declaration of string
	
	printf("Enter Your Sting : ");
	scanf("%s",&string);                     //Read string
	printf("\n\tYour String is : %s",string);
	
	length=strlen(string);
	printf("\n\n\tLength of the String is : %d",length);
	
	for(i=0; i<10; i++)               //Using nested for_loop
	{
		for(j=0; j<length; j++)
		{
			if(string[j]==vowel[i])
			count = count+1;
		}
	}
	printf("\n\n\tVowel in Your Entered String are : %d\n",count);
}                                                                   //End of Main

