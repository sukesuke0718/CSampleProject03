#include <stdio.h>

int	main(void){

	int number;
	char moji[12] = "Hello,World";

	printf("input number:");
	scanf("%d", &number);

	if (number > 0) {
		for (int i = 0; i <= number; i++) {
			printf("%d", i + 1);
			printf(" : ");
			printf("%s\n", moji);
		}
	}
	else {
		printf("miss");
	}

	return 1;
}