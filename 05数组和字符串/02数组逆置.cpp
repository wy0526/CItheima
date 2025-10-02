#include <stdio.h>

int main2(void) {

	int arr[] = { 1, 4, 5, 3, 7, 8 };
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0, j = len - 1; i < j; i++, j--) { //设置两个变量，分别从前从后
		int temp = 0;                     //停止条件为：i < j, 不用分奇数偶数判断
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	for (int i = 0; i < len; i++) {
		printf("%d  ", arr[i]);
	}

	return 0;
}