#include <stdio.h>
#define PERSON_NUM 5;
#define SCORE_NUM 3;

int main4(void) {

	int arr[5][3];
	for (int i = 0; i < 5; i++) {
		printf("------ �� %d ��ѧ���ĳɼ�: ------\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("������� %d �ſγ̵ĳɼ�:", j + 1);
			scanf_s("%d", &(arr[i][j]));
		}
	}

	//��ӡѧ���ɼ�
	for (int i = 0; i < 5; i++) {
		printf("�� %d ��ѧ���ĳɼ�:", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//ÿ��ѧ�����ܳɼ���ƽ���ɼ�
	for (int i = 0; i < 5; i++) {
		int scoreAdd = 0;
		for (int j = 0; j < 3; j++) {
			scoreAdd += arr[i][j];
		}
		int scoreAver = scoreAdd / 3;
		printf("------ �� %d ��ѧ���ĳɼ�: ------\n", i + 1);
		printf("�ܳɼ��� %d �֣� ƽ���ɼ��� %d ��\n", scoreAdd, scoreAver);
	}

	//ÿ�ſγ̵��ܳɼ���ƽ���ɼ�
	for (int i = 0; i < 3; i++) {
		int scoreAdd = 0;
		for (int j = 0; j < 5; j++) {
			scoreAdd += arr[j][i];
		}
		int scoreAver = scoreAdd / 5;
		printf("------ �� %d �ſγ̵ĳɼ�: ------\n", i + 1);
		printf("�ܳɼ��� %d �֣� ƽ���ɼ��� %d ��\n", scoreAdd, scoreAver);
	}


	return 0;
}