#include <stdio.h>

int main(void) {

	int a = 5;
	int b = 10;
	int c = 7;

	printf("请输入小猪a、b、c的体重：\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			printf("a 最重，体重是 %d", a);
		}
		else
		{
			printf("c 最重，体重是 %d", c);
		}
	}
	else if (b > c) {
		printf("b 最重，体重是 %d", b);
	}
	else {
		printf("c 最重，体重是 %d", c);
	}
	

	return 0;
}