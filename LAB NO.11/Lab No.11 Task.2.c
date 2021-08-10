#include<stdio.h>
float function(float cel);
float function2(float feran);
void main()
{
	printf("Programmer Name : MUDASIR KHAN\nRegistration No :20MDELE121\n\n");	
	
	int option;
	float cel, feran, k; 
	printf("\n\t***If you wanna enter temperature in celcius degree press 1 ***\n");
	printf("\t***If you wanna enter temperature in feranheit plz  press 2 ***\n");
	printf("\nplz Enter your choice : ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("plz Enter Temperature in celcius : ");
			scanf("%f",&cel);
			k = function(cel);
			printf("\nSo Temperature in celcius  is %.2f C and in feranheit is : %.2f F\n\n",cel,k);
			break;
			      case 2:
			           printf("plz Enter Temperature in feranheit : ");
			           scanf("%f",&feran);
			           k = function2(feran);
			           printf("\nSo Temperature in feranheit is %.2f F and in celcius is : %.2f C\n\n",feran,k);
			           break;
			                 default:
			                 	printf("You Entered invalid choice");
    }  
} 
float function(float cel)
{
	float feranheit;
	feranheit = 9.0/5.0*cel+32;
	return feranheit;
}
float function2(float feran)
{
	float celcius;
	celcius = 5.0/9.0*(feran-32);
	return celcius;
}
                                                             

