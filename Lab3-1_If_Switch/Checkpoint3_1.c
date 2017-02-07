//5710110137
#include <stdio.h>
int main () {
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num>0 && num%2 == 0)
		printf("%d is positive even number",num);
	else if(num>0 && num%2 != 0)
		printf("%d is positive odd number",num);
	else if(num<0 && num%-2 == 0)
		printf("%d is negative even number",num);
	else if(num<0 && num%-2 != 0)
		printf("%d is negative odd number",num);
	else
		printf("zero");
	printf("\nBye...\n");
	system("PAUSE");
	return 0;
}
