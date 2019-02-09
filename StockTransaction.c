/*
 * StockTransaction.c
 *
 *  Created on: Feb 9, 2019
 *      Author: gilescarlos32
 */

#include <stdio.h>

void main(){
    double numberOfShares = 1000;
    double pricePerShareInitial = 45.50;
    double firstCommission = numberOfShares * pricePerShareInitial * 0.02;
    double pricePerShareFinal = 56.90;
    double secondCommission = numberOfShares * pricePerShareFinal * 0.02;

    printf("Amount paid for stock: $%.2f\n", numberOfShares * pricePerShareInitial);
    printf("Amount of commission paid broker when he bought the stock: $%.2f\n", firstCommission);
    printf("Amount sold for stock: $%.2f\n", numberOfShares * pricePerShareFinal);
    printf("Amount of commission paid broker when he sold the stock: $%.2f\n", secondCommission);
    printf("Profit made: $%.2f\n", (pricePerShareFinal * numberOfShares) - (pricePerShareInitial * numberOfShares) - firstCommission - secondCommission);
    printf("\n");
}
