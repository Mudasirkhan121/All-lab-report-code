#include<stdio.h>
void main()
{
	/*Programmer Name:MUDASIR KHAN
	  Reg.No:20MDELE121         || */
  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121 \n");
	printf("Welcome to the Mini calculator\n");
	
	char option;         //declearation of option
	do                  //using DO_while loop
	{
	float a,b;          //declearation of two numbers
	int choice;         //declearation of choice
	printf("plz enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("\t\t***Now select choice***\n");
	printf("For Addition press 1\n");
	printf("For subtraction press 2\n");
	printf("For Multiplication press 3\n");
	printf("For division press 4\n");
	printf("plz press one option in the above choices:");
	scanf("%d",&choice);      //Read a choice
	
	switch(choice)            //using Switch Case
	{
		case 1:
			printf("%.2f + %.2f is = %.2f\n",a,b,a+b);
			break;                          //using Break statment
			
			case 2:
				printf("%.2f - %.2f = %.2f\n",a,b,a-b);
				break;
				case 3:
					printf("%.2f * %.2f = %.2f\n",a,b,a*b);
					break;
				case 4:
					printf("%.2f/%.2f = %.2f\n",a,b,a/b);
					break;
					default:                 //using Default case
						printf("plz select a valid option");
	}                                        //End of enternal loop
	printf("\nDo you want to try again? plz enter Y or N:");
	fflush(stdin);               //Read character 2nd time using fflush(stdin)
	scanf("%c",&option);
    }                                      //End of External loop
    while(option=='Y'||option=='y');
}                                          //End of main loop




