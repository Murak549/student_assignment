#include <cstdio>

int getInt() {
	int input = 0;
	scanf_s("%d", &input);
	fseek(stdin, 0, SEEK_END);

	return input;
}

int main() {
	int num_of_class = 0;
	printf("�� �б� ��");
	num_of_class = getInt();
	printf("\n�б� ���� %d �� �½��ϱ�?", num_of_class);
}