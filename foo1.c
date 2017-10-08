#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {

	// display buildnumber on startup
	printf("Hello, World! I'm foo1 (BUILD #%d)\r\n", __MYVAR);

	for (int i=0; i<5; i++) {
		sleep(1);
		printf("*");
		fflush(0);
	}
	printf("\r\n");

	return 0;
}
