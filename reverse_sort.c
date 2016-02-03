#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sort.h"

int compare(int a, int b) {
	    return b - a;
}

int compare1(int *a, int *b){
	return *b - *a;
}