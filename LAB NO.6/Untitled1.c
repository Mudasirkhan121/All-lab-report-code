#include<stdio.h>
void main()
{
	/*Programmer Name:MUDASIR KHAN
	  Reg.No:20MDELE121        || */
  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");
	
	char option;     //declearation of option
	do              //Using Do_While loop
	{
		char ch;    //decearation of ch
		printf("plz enter your choice a b or c:");
		fflush(stdin);        //We read a character 2nd time- 
		scanf("%c",&ch);      // for this we use fflush(stdin) 
		switch(ch)
		{
			case 'A':
			case 'a':
			printf("A for Apple\n");	
			break;	
			case 'B':
			case 'b':
			printf("B for ball\n");
			break;
			case 'C':
			case 'c':
			printf("C for Cat\n");
			break;
			default:
			printf("plz enter a valid alphabet\n");	
		}
		printf("\nDo you want to try again? press Y or N:");
		fflush(stdin);
		scanf("%c",&option);
	
		
	}
    while(option=='Y'||option=='y');

}


