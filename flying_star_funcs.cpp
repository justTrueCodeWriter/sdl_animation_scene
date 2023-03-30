#include <stdio.h>
#include <stdlib.h>

float rand_float(float min, float max) {
	return ((max - min) * ((float)rand() / (float)RAND_MAX)) + min;
}
