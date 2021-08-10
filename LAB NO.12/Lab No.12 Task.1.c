#include<stdio.h>
void main()
{
    printf("Programmer Name : MUDASIR KHAN\nRegistration No :20MDELE121\n\n");

	int arr[5];                                 //Declare array
	int i;                                    //Declare integer variable
	for(i=0; i<5; i++)                       //using for loop                
	{
		arr[i] = i;
		printf("Element %d of Array is = %d\n",i+1,arr[i]);
	}                                    //End of enternal block
}                                       //End of Main block


