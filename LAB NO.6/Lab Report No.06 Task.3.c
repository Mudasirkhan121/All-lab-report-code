#include<stdio.h>
void main()
{
	/*Programmer Name:MUDASIR KHAN
	  Reg.No:20MDELE121      || */
  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");
	
	int r, l, b, h, choice;                            //declaration variables
	float area, pi = 3.14;
	printf("plz enter your choice\n");
	printf("1 for Area of Triangle\n2 for Area of Square\n");
	printf("3 for Area of Circle\n");            
	scanf("%d",&choice);                       //read choice for calculation of areas
	
	switch(choice)                           //area calculation using lenght,radius etc.
	{
		case 1:
			printf("plz enter Base and Hight of the Triangle:\n");
			scanf("%d %d",&b,&h);
			area = 1.0/2.0*b*h;
			printf("The Required Area of a Triangle is :\n%0.2f",area);
			break;
			
			case 2:
				printf("plz enter Lenth of the square:\n");
				scanf("%d",&l);
				area = l*l;
				printf("The required Area of a square is :\n%.2f",area);
				break;
				
				case 3:
					printf("plz enter the radius of the circle:\n");
					scanf("%d",&r);
					area = pi*r*r;
					printf("The required Area of Circle is :\n%.2f",area);
					break;
					
					default:
						printf("Plz enter a valid choice");
	}                                                         //End of Switch block
}                                                             //End of Main block

