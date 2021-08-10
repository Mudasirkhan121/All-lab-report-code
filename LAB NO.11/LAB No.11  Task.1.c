#include <stdio.h>

int larger(int a, int b);            //Declaration of larger function

void main()
{
	int i,j,k;          //Declaration of three integer
	printf("plz enter two numbers :\n");
	scanf("%d %d",&i ,&j);          //Read two integer
	
	k =larger(i , j);                  //call larger function
	printf("The larger Value is : %d",k);
	
}

int larger(a, b)                  //define larger function
{
	if(a>b)                    //use if_else statement to check larger value
	return a;
	
	else
	return b;

}                              






