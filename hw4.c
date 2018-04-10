#include <stdio.h>
#include <string.h>

char* sstrncat( char *destptr, const char *srcptr, size_t num ){
	int length = strlen(destptr);
	
	for (int i = 0; i < num; ++i){
		destptr[length + i] = srcptr[i];
	}
	destptr[length + num] = 0;
	
	return destptr;
	
}

int main(void){
	char str1[40];
	char str2[40];
	int size;
	scanf("%s %s %d", &str1, &str2, &size);
	
	sstrncat(str1, str2, size);
	
	printf ("Result: %s\n", str1);
	return 0;
}


	