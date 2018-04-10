#include <stdio.h>

int main(void){
	puts("Table of squares of natural numbers from 10 to 99");
	int size = 10;
	int nums[size][size];
	int k = 0;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size; ++j) {
			nums[i][j] = ((i + 1) * size + j) * ((i + 1) * size + j);
        }
    }
	
	for (int i = 0; i < size ; ++i){
		printf("%4d ", i);
	}
	printf("\n");
    for (int (*i)[size] = nums; i != nums + size - 1; ++i) {
        for (int *j = *i; j != *i + size; ++j) {
			if (j - (*i) == 0){
				printf("%d ", k);
				k++;
			}
            printf("%4d ", *j);
        }
        printf("\n");
    }
}
	