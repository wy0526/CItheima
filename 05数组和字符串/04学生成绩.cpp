#include <stdio.h>
#define PERSON_NUM 5;
#define SCORE_NUM 3;

int main4(void) {

	int arr[5][3];
	for (int i = 0; i < 5; i++) {
		printf("------ 第 %d 名学生的成绩: ------\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("请输入第 %d 门课程的成绩:", j + 1);
			scanf_s("%d", &(arr[i][j]));
		}
	}

	//打印学生成绩
	for (int i = 0; i < 5; i++) {
		printf("第 %d 名学生的成绩:", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//每名学生的总成绩、平均成绩
	for (int i = 0; i < 5; i++) {
		int scoreAdd = 0;
		for (int j = 0; j < 3; j++) {
			scoreAdd += arr[i][j];
		}
		int scoreAver = scoreAdd / 3;
		printf("------ 第 %d 名学生的成绩: ------\n", i + 1);
		printf("总成绩是 %d 分， 平均成绩是 %d 分\n", scoreAdd, scoreAver);
	}

	//每门课程的总成绩、平均成绩
	for (int i = 0; i < 3; i++) {
		int scoreAdd = 0;
		for (int j = 0; j < 5; j++) {
			scoreAdd += arr[j][i];
		}
		int scoreAver = scoreAdd / 5;
		printf("------ 第 %d 门课程的成绩: ------\n", i + 1);
		printf("总成绩是 %d 分， 平均成绩是 %d 分\n", scoreAdd, scoreAver);
	}


	return 0;
}