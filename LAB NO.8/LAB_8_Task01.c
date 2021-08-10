#include<stdio.h>
void main()
{
	
  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");
	
	int num,sum=0;           //declearation of num
	printf("plz enter a number you want to sum:\n");
	printf("\t\t ************************************ \n");
	
	do                     //Using Do_While loop
    {
    	scanf("%d",&num);  //Read num
    	sum = sum + num;
     	
    }                      //End of Enternal Block
	while(num!=0);         //!= this is use for not equal to
	printf("\t\t ************************************ \n");
	printf("TOTAL : %d",sum);

}                        //End of Main Block


