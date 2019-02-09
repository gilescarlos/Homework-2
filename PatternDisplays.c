/*
 * hwTwo.c
 *
 *  Created on: Feb 9, 2019
 *      Author: gilescarlos32
 */

#include <stdio.h>

void main(){
	printf("Pattern A");
    for (int i = 0; i < 10; i++) {
    	for (int j = 0; j < i; j++) {
    		printf("+");
    	}
		printf("\n");
    }

    printf("\nPattern B\n");
	for (int x = 1; x < 10 ; x++) {
    	for (int y = 10; y > x; y--) {
    		printf("+");
    	}
    	printf("\n");
    }
}


