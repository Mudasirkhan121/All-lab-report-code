#include <stdio.h>

void swap();            //Declaration of swap function

void main()
{
	int a , b;          //Declaration of two integer
	printf("plz enter two number for swapping:\n");
	scanf("%d %d",&a ,&b);          //Read two integer
	printf("The Two numbers before swapping is:\n  %d \t %d \t\n",a,b);
	swap(a , b);                  //call swap function
	
}

void swap(a , b)                  //define swap function
{
	int temp;                   //Declare temp variable
	temp = b;
	b = a;
	a = temp;
	printf("The Two numbers after swapping is:\n   %d \t %d \t",a,b);
}                






