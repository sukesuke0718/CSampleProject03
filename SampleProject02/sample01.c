#include <stdio.h>

int	main(void){

	int number;	// ����
	char moji[12] = "Hello,World";	//�o�͗p����

	printf("input number:");
	// ���������
	scanf("%d", &number);

	// ���͌��ʂ��o��
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