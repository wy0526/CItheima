#include <stdio.h>

int main3(void) {

	int arr[] = { 1, 4, 5, 3, 2, 6 };
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}