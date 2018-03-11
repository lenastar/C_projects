#include <stdio.h>

int main(void){
	float a;
	float b;
	float c;
	scanf("%f %f %f", &a, &b, &c);
	if (a + b < c || a + c < b || b + c < a){
		puts("Uncorrect");
		return 1;
	}
	else if (a * a + b * b == c * c){
		puts("True");
	}
	else if (a * a + c * c == b * b){
		puts("True");
	}
	else if (c * c + b * b == a * a){
		puts("True");
	}
	else{
		puts("False");
	}
	return 0;
	}

	

	