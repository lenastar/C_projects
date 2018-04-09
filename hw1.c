#include <stdio.h>

int main(void){
	float a;
	float b;
	float c;
	scanf("%f %f %f", &a, &b, &c);
	if (a + b - c < 0.001 || a + c - b < 0.001 || b + c - a < 0.001){
		puts("Uncorrect");
		return 1;
	}
	else if (a * a + b * b - c * c < 0.001){
		puts("True");
	}
	else if (a * a + c * c - b * b < 0.001){
		puts("True");
	}
	else if (c * c + b * b - a * a < 0.001){
		puts("True");
	}
	else{
		puts("False");
	}
	return 0;
	}