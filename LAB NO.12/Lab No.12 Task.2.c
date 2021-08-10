#include<stdio.h>
void main()
{
	printf("***Programmer:MUDASIR KHAN***\n***Reg.No:20MDELE121***\n\n");
	
	int size;                                 //Declare size variable
	int arr[size];                             //Declaration of array
	int i, sum=0;                                //Declaration of i and sum 
	printf("Enter the Size of an array : \n");
	scanf("%d",&size);                                     //Read size
	printf("\nEnter %d values of an array : \n",size);
	
	for(i=0; i<size; i++)                                   //Using For_loop
	
		scanf("%d",&arr[i]);                                    //Read an Array
		printf("\n\t%d values you entered here are : \n\n",size);
	
	
	
	for(i=0; i<size; i++) 
	{
		printf("%d\t",arr[i]);
		sum = sum+arr[i];                         //Calculate Sum
	}
	printf("\n\nSum of the values is : %d",sum);  //Display Sum
}                                                 //End of main
 

