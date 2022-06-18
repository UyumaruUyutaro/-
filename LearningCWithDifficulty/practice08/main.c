/*
 * main.c
 *
 *  Created on: Jun 12, 2022
 *      Author: ilove
 */


#include <stdio.h>

int main(void)
{
	int suuti;
	int no;
	int studentNumber;
	scanf("%d", &suuti);
	if (suuti == 10) {
		printf("入力値は10です。\n");
	} else {
		printf("入力値は10ではありません。\n");
	}

	scanf("%d", &no);
	if (no == 1) {
		printf("名前：野比のび太\n");
	} else if (no == 2) {
		printf("名前：源静香\n");
	} else if (no == 3) {
		printf("名前：剛田武\n");
	} else if (no == 4) {
		printf("名前：骨川スネ夫\n");
	} else {
		printf("該当する人はいません。\n");
	}

	scanf("%d", &studentNumber);
	switch (studentNumber) {
	case 1:
		printf("野比のび太\n");
		break;
	case 2:
		printf("源静香\n");
		break;
	case 3:
		printf("剛田武\n");
		break;
	case 4:
		printf("骨川スネ夫\n");
		break;
	}
	return 0;
}
