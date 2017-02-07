//5710110137
#include <stdio.h>
int main() {
	int i, j = 8;
	for (i = 1; i <= 5; i++) {
		printf("%d %d \n", i, j);
		j -= 2;
	}
	return 0;
}

// while loop
/*
int main() {
	int i = 1, j = 8;
	while (i <= 5) {
		printf("%d %d\n", i, j);
		i++;
		j-=2;
	}
}
*/

// do-while loop
/*
int main() {
	int i = 1, j = 8;
	do {
		printf("%d %d\n", i, j);
		i++;
		j -= 2;
	} while (i <= 5);
}
*/

// 2.
/*
int main() {
	int num, i;
	printf("Which number do you want to display : ");
	scanf("%d", &num);
	for(i = 1; i <= 6; i++) {
		if(num * i <= 60)
			printf("%d %d\n", i, num*i);
	}
}
*/
