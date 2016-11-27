#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {

	return a + b;
}

int sub(int a, int b) {

	return a - b;
}

void help(char *prog) {

	printf("%s <add/sub> num1 num2\n", prog);
}

int main( int argc, char **argv) {

	if (argc != 4) {

		help(argv[0]);

		return -1;
	}
        
	if (!strcmp(argv[1], "add")) {
		printf("add result %d\n", add(atoi(argv[2]), atoi(argv[3])));
	} else if (!strcmp(argv[1], "sub")) {
		printf("sub result %d\n", sub(atoi(argv[2]), atoi(argv[3])));
	} else {
	 	help(argv[0]);
		return -1;
	}

	printf("bye!\n");

	return 0;

}

