#include <stdio.h>

int ab(int num);

int main()
{
	int i;
	for (i = -1000; i < 1000; i++) {
		if (ab(i + 100)) {
			printf("x:%d\n", i);
		}

	}
	return 0;
}


int ab(int num)
{
	for (int j = -1000; j < 1000; j++) {
		if (num == j * j) {
			return 1;
		}
		else {
			return 0;
		}
	}
}