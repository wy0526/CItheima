#include <stdio.h>
#define SIZE 10

int main1(void) {

	int arr[SIZE];  //使用宏更好

	for (int i = 0; i < SIZE; i++) {
		printf("请输入第 %d 只小猪的体重：\n", i + 1);
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];   //优化
	int num = 0;
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] > max) {
			max = arr[i];
			num = i + 1;
		}
	}

	printf("第 %d 只小猪最重，体重是 %d", num, max);

	return 0;
}