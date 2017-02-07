//5710110137
#include <stdio.h>
int main () {
	float weight, height, bmi;
	printf("Enter your Weight (kg): ");
	scanf("%f", &weight);
	printf("Enter your Height (m) : ");
	scanf("%f", &height);
	bmi = weight/(height * height);
	printf("Your BMI = %f\n\n",bmi);
	if(bmi < 18.5)
		printf("Underweight");
	else if((bmi>=18.5) && (bmi<25))
		printf("Normal");
	else if((bmi>=25) && (bmi<=30))
		printf("Overweight");
	else
		printf("Obese");
	printf("\n\n");
	system("PAUSE");
}

