// 5710110137
// labMatrix.c
#include <stdio.h>
#define MAX 10
int main() {
	int MatA[MAX][MAX] = {};
	int MatB[MAX][MAX] = {};
	int MatC[MAX][MAX] = {};
    int ra, rb, ca, cb, i, j;
    printf("Matrix A\n");
    printf("Number of rows = ");
	scanf("%d", &ra);
    printf("Number of columns = ");
	scanf("%d", &ca);
	
	// Input elements of Matrix A (ra x ca)
    for (i = 0; i < ra; i++) {
    	for(j = 0; j < ca; j++) {
    		printf("matA(%d,%d) = ", i + 1, j + 1);
    		scanf("%d", &MatA[i][j]);
 		}
 	}
 	
	// Show elements of Matrix A (ra x ca)
 	for (i = 0; i < ra; i++) {
 		for(j = 0; j < ca; j++)
 			printf("%5d", MatA[i][j]);
 		printf("\n");
 	}
 	
 	printf("\nMatrix B\n");
	printf("Number of rows = ");
	scanf("%d", &rb);
	printf("Number of columns = ");
	scanf("%d", &cb);
 	
	// Input elements of Matrix B (rb x cb)
	for (i = 0; i < rb; i++) {
		for(j = 0; j < cb; j++) {
			printf("matB(%d,%d) = ", i + 1, j + 1);
			scanf("%d", &MatB[i][j]);
 		}
 	}
	
	// Show elements of Matrix B(rb x cb)
 	for (i = 0; i < rb; i++) {
 		for(j = 0; j < cb; j++)
 			printf("%5d", MatB[i][j]);
 		printf("\n");
	}
	printf("Matrix C = A + B \n");
	
 	// Addition: Matrix C = A + B
	for (i = 0; i < ra; i++) {
		for(j = 0; j < ca; j++)
		MatC[i][j] = MatA[i][j] + MatB[i][j];
	}	
	
	// Show elements of Matrix C(ra x ca)
	for (i = 0; i < ra; i++) {
		for(j = 0; j < ca; j++)
			printf("%5d", MatC[i][j]);
		printf("\n");
	}
	
	getch();
	return 0;
}
