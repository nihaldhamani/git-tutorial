#include <stdio.h>
#include <stdlib.h>

void HelloWorld(int n);

int main (int argc, char *argv[]){
	int x;
	if(argc == 2){
		x = atoi(argv[1]);
		HelloWorld(x);

		if (x == x)
			printf("Goodbye\n");
	}
	else
		printf("%s\n", "Wrong # of arguments");
	

	return 0;
}

void HelloWorld(int n){
	if (n>0){
		printf("%s\n", "Hello, World!");
		HelloWorld(n-1);
	}

}
