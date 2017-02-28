// 5710110137
// Prime Numbers
#include <stdio.h>
int main() {
    int i, j, n, num;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        n = 0;
        for (j = 1; j <= i; j++)
            if (i%j == 0)
                n++;
        if (n == 2)
            printf("%d ", i);
    }
    printf("\n\n");
    system("PAUSE");
}

/*{
int n,i,j,r,c;
    printf("Find Prime number\n");
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=1;
        r=sqrt(i);
        for(j=2;j<=r;j++)
           c=c&&!(i%j==0);
        if(c==1)
           printf("%d ",i);
    }
    getch();
    return 0;
}*/
