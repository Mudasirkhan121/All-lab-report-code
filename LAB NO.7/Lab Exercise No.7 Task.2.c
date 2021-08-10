#include<stdio.h>

void main()
{
	/*Programmer Name:MUDASIR KHAN
	  Reg.No:20MDELE121        || */
  	 
	printf("***Programmer Name:MUDASIR KHAN***\n***Reg.No:20MDELE121***\n\n"); 
	printf("*******Out put of For Loop program*******\n");
	
	int i, j;
	i = 15;
	while(i>0)
	{
		printf("%d = ",i);
		j =i-1;
		while(j>0)
		{
			printf("#");
			j = j-1;
		}
		printf("\n");
		i = i-1;
	}

	
}                                                                   //End of Main

