#include<stdio.h>
void main()
{
	/*Programmer Name:MUDASIR KHAN
	  Reg.No:20MDELE121       || */
  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");
	
	float a,b,result;                 //declare two variables
	char opcode;
	printf("plz Enter a numbers:");
	scanf("%f %f",&a,&b);             //read variables
	
	printf("plz enter\n + for addition\n - for subtraction\n * for multiplication\n / for division\n");
	printf("********************************************************************\n");
	
	fflush(stdin);                    //for using scanf 2nd time
	scanf("%c",&opcode);
	
	switch(opcode)                   //switch case and expression
	{
		case '+':                    //case for addition
		result = a + b;
		printf("%0.2f + %0.2f = %0.2f",a,b,result);
		break;
		
		case '-':                                   //case for substraction
			result = a - b;
			printf("%0.2f - %0.2f = %0.2f",a,b,result);
			break;
			
			case '*':
				result = a * b;                       //case for Multiplication
				printf("%0.2f * %0.2f = %0.2f",a,b,result);
				break;
				
				case '/':                             //case for division
					if(b==0)                          //using if statement
					printf("Sorry! Denominator is Zero Error");
					else
					{
					result = a/b;	
					printf("%0.2f / %0.2f = %0.2f",a,b,result);
				    }
					break;
					
					default:                               //case for default
						printf("Plz Enter a valid option");
	}                                                         //end of Switch
}                                                             //end of main



