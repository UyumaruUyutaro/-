#include <stdio.h>

int main(void) {
	int score;

	do {
		if (score != 0) printf("点数は0～100の範囲で入力してください。\n");
		printf("点数を入力してください。：");
		scanff("%d", &score);
	} while (score < 0 || score > 100);

	printf("点数は %d点 です。", score);
	return 0;
}
