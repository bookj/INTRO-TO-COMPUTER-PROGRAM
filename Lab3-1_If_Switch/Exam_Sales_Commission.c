//5710110137
#include <stdio.h>
int main () {
	int tsales;
	float salescom;
	printf("Input Total sales : ");
	scanf("%d", &tsales);
	if (tsales < 1000) {
		salescom = tsales*5/100;
		printf("Total sales = %d and Sales commission = %.2f\n",tsales,salescom);
	}
	else if (tsales>=1000 && tsales<=5000) {
		salescom = tsales*7/100;
		printf("Total sales = %d and Sales commission = %.2f\n",tsales,salescom);
	}
	else {
		salescom = tsales*10/100;
		printf("Total sales = %d and Sales commission = %.2f\n",tsales,salescom);
	}
	system("PAUSE");
	return 0;
}
