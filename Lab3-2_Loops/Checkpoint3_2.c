//5710110137
#include <stdio.h>
/*int main() {
	int i, j, k, num;
	printf("Enter the number of rows : ");
	scanf("%d", &num);
	for(i = num; i > 0; i--) {
		for(j = num - 1; j >= i; j--) {
			printf(" ");
		}
		for(k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	system("PAUSE");
}*/

int main() {
	int i, j, k;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if(i==j || i<j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
