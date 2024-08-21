#include <stdio.h>

int main(void) {
	int a =29;
	
	int *b = &a;
	char *c = &a;
	
	printf("%d\n", *b);
	printf("%d\n", *c);
	

}
