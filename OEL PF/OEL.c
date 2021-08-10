#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c=0;
	printf("MUDASIR KHAN\n REG NO=20MDELE121\n");
	printf("\n ");
	printf("enter positive number\n");
	scanf("%d",&a);
	for(b=2;b<=a/2;b++)
	{
		if(a%b ==0)
		{
			c=1;
			break;
		 } 
	}
	if(a==1)
	{
		printf("1 is neither prime nor composite:");
	}
	else{
		if(c==0)
		printf("%d is a prime number",a);
		else
		printf("%d is not a prime number",a);
	}
	return 0;
}
