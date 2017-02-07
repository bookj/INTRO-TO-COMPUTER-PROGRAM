//5710110137
#include <stdio.h>
int main() {
    typedef struct {
        int x,y,z;
    } coordinate;
    typedef struct {
        coordinate position;
        char name[30];
//        char population[30];
//        int size;
    } planet;
    planet ex ={{1,2,3}, "JJJ"};
    printf("%d", ex.position.y);

/*
	typedef struct {
        char name[30];
        int nummember;
        planet planets[15];

    } galaxy;
    galaxy solar={"solar system",8,{{"Mercury","85000000000",30000,{4,6,8}},{},{"Earth","7000000000",12755,{3,5,7}}}};
*/
}
