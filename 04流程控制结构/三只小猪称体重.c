#include <stdio.h>

int main(void) {

	int a = 5;
	int b = 10;
	int c = 7;

	printf("������С��a��b��c�����أ�\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			printf("a ���أ������� %d", a);
		}
		else
		{
			printf("c ���أ������� %d", c);
		}
	}
	else if (b > c) {
		printf("b ���أ������� %d", b);
	}
	else {
		printf("c ���أ������� %d", c);
	}
	

	return 0;
}