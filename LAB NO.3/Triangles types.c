#include<stdio.h>
void main()
{

  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");
	
	int A,B,C;
	printf("plz enter the three sides of a Triangle:");
	scanf("%d%d%d",&A,&B,&C);
	if(A==B&&B==C&&C==A)
	printf("The Triangle is Equiletral");
	else
	{
		if((A==B||B==C))
		printf("The Triangle is Isocelse");
		else
		printf("The Triangle is Scelence");
	}
	
	
}


