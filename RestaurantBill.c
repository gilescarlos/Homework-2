/*
 * RestaurantBill.c
 *
 *  Created on: Feb 9, 2019
 *      Author: gilescarlos32
 */
#include <stdio.h>

void main(){
    double meal = 88.67;
    double tax = 0.0675;
    double tip = 0.20;

    printf("Meal Cost: $%.2f\n", meal);
    printf("Tax: $%.2f\n", tax * meal);
    printf("Tip: $%.2f\n", (meal + (tax * meal)) * tip);
    printf("Total Bill: $%.2f\n", meal + (tax * meal) + ((meal + (tax * meal)) * tip));
}


