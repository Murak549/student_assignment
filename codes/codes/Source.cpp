#include <cstdio>

int getInt() {
	int input = 0;
	scanf_s("%d", &input);
	fseek(stdin, 0, SEEK_END);

	return input;
}

int main() {
	int num_of_class = 0;
	printf("총 학급 수");
	num_of_class = getInt();
	printf("\n학급 수가 %d 명 맞습니까?", num_of_class);
}