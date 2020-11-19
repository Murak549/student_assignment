#include <cstdio>
#include <fstream>
#include <string>
#include <cstdio>
#define _CRT_SECURE_NO_WARNINGS

int getInt() {
	int input = 0;
	scanf_s("%d", &input);
	fseek(stdin, 0, SEEK_END);

	return input;
}

int main() {
	int num_of_class = 0;
	printf("ÃÑ ÇÐ±Þ ¼ö\n");
	num_of_class = getInt();
	for (int i = 0; i < num_of_class; i++) {
		printf("HELLO");
	}

	return 0;
}