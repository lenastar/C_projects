#include <stdio.h>

int main(void){
	int count_digital = 0;
	int count_character = 0;
	char c;
	
	while ((c = getc(stdin)) != EOF){
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			count_character += 1;
		}
		if (c >= '0' && c <= '9'){
			count_digital += 1;
		}
	}
	printf("Count of digital:%d\n", count_digital);
	printf("Count of character:%d", count_character);
	
}