#include <stdio.h>

int	main(void){

	int number;	// “ü—Í
	char moji[12] = "Hello,World";	//o—Í—p•¶Žš

	printf("input number:");
	// •¶Žš‚ð“ü—Í
	scanf("%d", &number);

	// “ü—ÍŒ‹‰Ê‚ðo—Í
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