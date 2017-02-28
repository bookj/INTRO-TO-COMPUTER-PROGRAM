// 5710110137
// labArray2Dex15.c
#include<stdio.h>
int main() {
	int i, j, scores[3][5];
    int sum = 0;
    float avg;
    for (i = 0; i < 3; i++)
    	for (j = 0; j < 5; j++) {
    		scanf("%d", &scores[i][j]);
        	sum = sum + scores[i][j];
    	}
//    avg = sum/15;
	avg = sum/(i * j);
    printf("Average of score = %.2f\n", avg);
    return 0;
}

