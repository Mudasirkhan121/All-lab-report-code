#include<stdio.h>                        //Library of the program
void main()                                  //main function
{

	
	int i,size,flag,high,low,mid;        //Declaration of i,size,flag,high,low,mid
	printf("\nEnter the size of array:");
	scanf("%d",&size);                   //Read size
	printf("\n");
	int key,array[size];                //Declaration of key and array
	for(i=0;i<size;i++)
	{
	 printf("Enter element no.%d of the array:",i+1);
	 scanf("%d",&array[i]);                             //Read array
	}
	printf("\nEnter the value you wanna check:");
	scanf("%d",&key);                               //Read key
		low=0;                                       //initialization of low
	high=size-1;
	mid=(high+low)/2;
	while(low<=high)                            //using While_loop
	{
		if(array[mid]<key)                     //using if_statment
		low=mid+1;
		else if(array[mid]==key)
		{
			printf("Yes %d is present at position %d in the enterd elements\n",key,mid+1);
			break;			              //using Break_statment
		}
		else
		high=mid-1;
		mid=(low+high)/2;                    //using mid formula
	}
	if(low>high)
	printf("\nElement %d is not found in the entered elements\n\n",key);
}                                          //End of main

