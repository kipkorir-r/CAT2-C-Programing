/*
	ROBIN KIPKORIR MUTAI
	PA106/G/28705/25
*/
#include <stdio.h>

int main() {
    // Declare variables
    double hours_worked,hourly_wage,gross_pay,taxes,net_pay;
 
    //input for hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hours_worked);

    printf("Enter hourly wage: $");
    scanf("%lf", &hourly_wage);

    // gross pay with overtime
    if (hours_worked > 40) {
        //  1.5 times the normal pay for hours in excess 
        gross_pay = (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
    } else {
        //  pay
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculate taxes
    if (gross_pay > 600) {
        // Tax is 15% of the first $600 and 20% of the rest
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    } else {
        // Tax is 15% of the gross pay
        taxes = gross_pay * 0.15;
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Print the results
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}