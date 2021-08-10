#include<stdio.h>
#include<math.h>
void main()
{
	/*Programmer Name:MUDASIR KHAN
	  Reg.No:20MDELE121       || */
  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");

	int a, b, c, disc, flag;                   //declaration variables
	float root1, root2;
	float real, imag;
	printf("plz enter the value of a b and c for quardratic eq. :\n");
	scanf("%d %d %d",&a, &b, &c);              //read variables
	disc = b*b - 4*a*c;                        //discriminant formula
	
	if(disc == 0)                            //nature of disc
	flag = 0;                                //flag assignment
	else if(disc>0)
	flag = 1;
	else
	flag = 2;
	
	switch(flag)                    //roots calculation using disc and flag
	{
		case 0:
			root1 = -b/2*a;
			root2 = root1;
			printf("Roots of your quardratic eq. are :\n %.2f and %.2f",root1,root2);
			break;
			
			case 1:
				root1 = -b+sqrt(disc)/2*a;
				root2 = -b-sqrt(disc)/2*a;
				printf("Roots of your quardatric eq. are :\n %.2f and %.2f",root1,root2);
				break;
				
				case 2:
					real = -b/2*a;
					imag = sqrt(disc)/2*a;
					printf("Real and Imaginary parts of your quardratic eq. Roots are :\n %.2f and %.2f",real,imag);
					break;
					
					default:
						printf("plz enter a valid coeffeicient");
	}                                                                //End of Switch
}                                                                   //End of Main
