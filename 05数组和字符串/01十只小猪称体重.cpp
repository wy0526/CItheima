#include <stdio.h>
#define SIZE 10

int main1(void) {

	int arr[SIZE];  //ʹ�ú����

	for (int i = 0; i < SIZE; i++) {
		printf("������� %d ֻС������أ�\n", i + 1);
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];   //�Ż�
	int num = 0;
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] > max) {
			max = arr[i];
			num = i + 1;
		}
	}

	printf("�� %d ֻС�����أ������� %d", num, max);

	return 0;
}