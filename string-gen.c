#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char string_buffer[255];
int string_length;

void pickLength(int length) { string_length = length; }

void generateString() {
	for (int i = 0; i < string_length; i++) {
		char randomLetter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+="[random() % 49];
		string_buffer[i] = randomLetter;
	}
	printf("%s\n", string_buffer);
}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	if(argc == 2) {
		pickLength(atoi(argv[1]));
		generateString();
	} else {
		printf("String length argument is required\n");
		return 1;
	}

	return 0;
}
