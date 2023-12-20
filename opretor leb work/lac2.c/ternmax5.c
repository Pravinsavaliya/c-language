#include<stdio.h>
int main() {
    int A,B,C,D,E;
    printf ("enter your number:");
    scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);

    (A>B)?(A>C)?(A>D)?(A>E)?printf("\n A is Maximum"):printf("\n E is Maximum"):printf("\n D is Maximum"):printf("\n C is Maximum"):
   (B>C)?(B>D)?(B>E)?printf("\n B is Maximum"):printf("\n E is Maximum"):printf("\n D is Maximum"):
   (C>D)?(C>E)?printf("\n C is Maximum"):printf("\n E is Maximum"):
   (D>E)?printf("\n D is Maximum"):printf("\n E is Maximum");
    return 0;
}
