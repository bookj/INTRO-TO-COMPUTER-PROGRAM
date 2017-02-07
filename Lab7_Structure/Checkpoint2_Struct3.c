//5710110137
#include <stdio.h>
#include <string.h>
#define MAX 4
typedef struct {
    char stcode[10];
    char name[30];
    float gpa;
    char status[15];
} student;

//show data of 1 student
void showStudent(student st);

//function set status with calculated from gpa
void setStatus(student allSt[ ]);
int main() {
    int i;
    student allSt[MAX];
    printf("Enter new data\n");
    for(i = 0; i < MAX; i++) {
    	printf("Student#%d\n",i+1);
        printf("Code : "); gets(allSt[i].stcode);
        printf("Name : "); gets(allSt[i].name);
        printf("GPA : "); scanf("%f",&allSt[i].gpa);
        fflush(stdin);
    }
    setStatus(allSt);
    printf("\n\nStudents with new status\n");
    for(i = 0; i < MAX; i++)
        showStudent(allSt[i]);
    system("PAUSE");
    return 0;
}

void showStudent(student st) {
    printf("%s %-20s GPA=%.2f status=%s\n", st.stcode, st.name, st.gpa, st.status );
}

//function set status with calculated from gpa
void setStatus(student allSt[MAX]) {
    int i;
    for(i = 0; i < MAX; i++) {
        if(allSt[i].gpa >= 3.50)
            strcpy(allSt[i].status, "EXCELENT");
        else if(allSt[i].gpa >= 2.00)
            strcpy(allSt[i].status, "PASS");
        else if(allSt[i].gpa >= 1.5)
            strcpy(allSt[i].status, "CRITICAL");
        else
            strcpy(allSt[i].status, "FAIL");
    }
}
