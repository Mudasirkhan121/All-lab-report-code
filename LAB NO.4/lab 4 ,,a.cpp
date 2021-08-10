#include <stdio.h>
int main()
{
while(1){
    printf("Enter Your Monthly Income: ");
    int monthlyIncome=0;
    int taxAmount=0;
    scanf("%d", &monthlyIncome);
    int annualIncome = 12 * monthlyIncome; //converts monthly to yearly income
    if (annualIncome > 500000) {
        if (annualIncome < 800000)
            taxAmount = annualIncome * 0.05;
        else if (annualIncome < 1000000)
            taxAmount = annualIncome * 0.07;
        else
            taxAmount = 100000 + (annualIncome - 1000000) * 0.03;
    }
    else
        taxAmount = 0;
    printf("Annual Income is %d\n", annualIncome);
    printf("Your Tax amount of your annual income is: %d\n", taxAmount);
    printf("Remaining amount after tax is %d\n", annualIncome - taxAmount);
}
}
