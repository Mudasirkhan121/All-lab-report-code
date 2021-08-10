
#include<stdio.h>               //Library of the program
void main()                     //main function
{


	int i =0;                        //Declare integer i
	int size,key,flag;                //Declaration of size,key,flag
	
	printf("Enter the size of an Array : ");
	scanf("%d",&size);                           //Read size
	
	int array[size];                            //declare array
	for(i=0; i<size; i++)                        //using for_loop
	{
		printf("Enter Element no.%d of the array : ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nEnter the key you wanna check : ");
	scanf("%d",&key);                              //Read key
	for(i=0; i<size; i++)
	{
		if(key == array[i])                        //using if command
		{
		flag = 1;                                  
		printf("value %d Found at position %d in the above elements\n",key,i+1);
	    }
	}
//if(flag == 1)
//printf("key found at position %d",i+1);
//else
	if(flag !=1)
	printf("key Not found");	
	
	
}                                           //End of Block



