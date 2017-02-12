// 5710110137
#include <stdio.h>
#define R 3			// ที่จอดรถมี 3 แถว
#define C 10			// แต่ละแถวสามารถจอดรถได้ 10 คัน

int main() {
	int loop = 1, i, j;
	int park[R][C] = {0};		// เก็บค่า 1 แสดงว่ามีรถจอด / ค่า 0 แสดงว่าไม่มีรถจอด
	int free[R] = {C, C, C};	// เก็บค่าจำนวนรถที่ว่างในแต่ละแถว
	int x, y;			// เก็บค่าตำแหน่งการจอด ณ แถว x และ คันที่ y
	char sym;			// เก็บค่า +/- แสดงถึงการ  จอด/ไม่จอด
	char code[R] = {'E', 'E', 'E'};	// เก็บค่ารหัสสถานะในแต่ละแถว
	do {				// แสดงค่าตำแหน่งการจอด/ไม่จอดรถ
		for(i = 0; i < R; i++) {
			printf("R%d : ", i + 1);
			for(j = 0; j < C; j++) {
				if(park[i][j])
					printf("X");
				else
					printf("-");
			}
			printf(" : %c", code[i]);
			printf("\n");
		}
		// รับค่าตำแหน่งที่จะจอด/ไม่จอดรถ
		printf("PARK AT : ");
		scanf("%d %d %c", &x, &y, &sym);

		if(sym == '+')
			park[x-1][y-1] = 1;
		else if(sym == '-')
			park[x-1][y-1] = 0;
		else
			break;

		// ให้เขียนส่วนของโปรแกรมเพื่อตรวจสอบจำนวนรถที่ว่างในแต่ละแถว (5 คะแนน)
		for(i = 0; i < R; i++)
			for(j = 0; j < C; j++)
				if(park[i][j])
					free[i]--;

		// ให้เขียนส่วนของโปรแกรมเพื่อกำหนดค่ารหัสของแต่ละแถว จากจำนวนรถที่ว่าง (5 คะแนน)
		for(i = 0; i < R; i++) {
			if(free[i] == 10)
				code[i] = 'E';
			else if(free[i] == 0)
				code[i] = 'F';
			else
				code[i] = 'A';
		}
	} while(loop);

	system("PAUSE");
	return 0;
}
