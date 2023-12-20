#include<stdio.h>
int main() {
    int A,B,C,D;
    printf ("enter your number:");
    scanf("%d %d %d %d",&A,&B,&C,&D);

   (A>B)?(A>C)?(A>D)?printf("\n A is Maximum"):printf("\n D is Maximum"):printf("\n C is Maximum"):
   (B>C)?(B>D)?printf("\n B is Maximum"):printf("\n D is Maximum"):
   (C>D)?printf("\n C is Maximum"):printf("\n D is Maximum");
    return 0;
}
