#include<stdio.h>
void main()
{

  	 
	printf("Programmer Name:MUDASIR KHAN\nReg.No:20MDELE121\n\n");
	
	int A, B, Temp1, Temp2, Rem, LCM;
	printf("plz enter two Numbers:");
	scanf("%d %d",&A, &B);
	
	Temp1 = A;
	Temp2 = B;
	
	do
	{
		Rem = A % B;
		A = B;
		B = Rem;
	}
	while(Rem>0);
	
	printf("\nHCF is : %d\n\n",A);
	
	LCM = (Temp1 * Temp2) / A;
	printf("LCM is : %d", LCM);

}


