#include <stdio.h>

int	main(void){

	int number;	// 入力
	char moji[12] = "Hello,World";	//出力用文字

	printf("input number:");
	// 文字を入力
	scanf("%d", &number);

	// 入力結果を出力
	if (number > 0) {
		for (int i = 0; i <= number; i++) {
			printf("%d : %s\n", i + 1, moji);
		}
	}
	else {
		printf("miss");
	}

	return 1;
}