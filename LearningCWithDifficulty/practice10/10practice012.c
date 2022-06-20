#include <stdio.h>

int main(void) {
	int score;

	printf("点数を入力してください。\n");
	scanf("%d", &score);

	while (score < 0 || score > 100) {
		printf("点数は０～１００までの値を入力してください。\n");
		scanf("%d", &score);
	}

	printf("点数は %d点 です。", score);
	return 0;
}
