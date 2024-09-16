#include <stdio.h>

int main() {
    double income, tax = 0.0, netIncome;

    printf("Enter your total income: ");
    scanf("%lf", &income);

    if (income <= 250000) {
        tax = 0.0;  
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + ((income - 500000) * 0.20);  
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + ((income - 1000000) * 0.30);  
    }

    netIncome = income - tax;

    printf("Total Income: %.2lf\n", income);
    printf("Tax Amount: %.2lf\n", tax);
    printf("Net Income after Tax: %.2lf\n", netIncome);

    return 0;
}
