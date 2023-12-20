#include<stdio.h>
int main() {
    int a,b,c;
    printf ("enter your number");
    scanf("%d %d %d",&a,&b,&c);

   (a>b)?(a>c)?printf("\n a is Maximum"):printf("\n c is Maximum"):
   (b>c)?printf("\n b is Maximum"):printf("\n c is Maximum");
    return 0;
}
