#include <stdio.h>

int main(void){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a)){
		puts("True");
	}
	else{
		puts("False");
	}
	return 0;
	}

	

	