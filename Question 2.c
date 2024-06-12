#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Question 2
/*
Write a C program that asks the user to enter several amounts of water consumed in cubic meter, then the program should calculate and print the price of each amount  (
 as well as the maximum and average values for all the calculated prices. The ,( use enters -1 when finishes.
The price of one coup is calculated as follows:
Between 1 to 20 coup THE PRICE IS 5 shiekel
Between 20-50 coup the price is 6.5 shiekel
Between 50-80 coup the prices is 8 shiekel
Greater than 80 the prices is 10 shiekel

You should use a function called calcPrice that takes the number of cubic meter and return the price. The result should be printed from main function.
*/



/*here is the algorithm as to my understanding
Ask the user to enter several amounts of water consumed in cubic meters
or just enter -1 if you finished
from 1 to 20 5 shekel and from 20 to 50 6.5 shekel and from 50 - 80 8 shekel and above 80 is 10 shekel
so as to my understanding lets say we have 21
the first 20 is 100 shekels and the one after is 6.5 so the sum is 106.5
*/
double calcPrice(int cubic_meters);

int main() {
    int cubic_meters;
    double price, total_price = 0, max_price = 0;
    int count = 0;

    while (1) {
        printf("please insert a positive integer or insert -1 if you want to exit:\n");
        scanf("%d", &cubic_meters);

        if (cubic_meters == -1) {
            break;
        } else if (cubic_meters >= 0) {
            price = calcPrice(cubic_meters);
            printf("The price for %d cubic meters is %.2f shekels.\n", cubic_meters, price);

            total_price += price;

            if (price > max_price) {
                max_price = price;
            }

            count++;
        }
    }

    double average_price = (count > 0) ? total_price / count : 0;

    printf("The maximum price is %.2f shekels.\n", max_price);
    printf("The average price is %.2f shekels.\n", average_price);

    return 0;
}

double calcPrice(int cubic_meters) {
    double price = 0;

    if (cubic_meters > 80) {
        price += (cubic_meters - 80) * 10.0;
        cubic_meters = 80;
    }
    if (cubic_meters > 50) {
        price += (cubic_meters - 50) * 8.0;
        cubic_meters = 50;
    }
    if (cubic_meters > 20) {
        price += (cubic_meters - 20) * 6.5;
        cubic_meters = 20;
    }
    if (cubic_meters > 0) {
        price += cubic_meters * 5.0;
    }

    return price;
}
