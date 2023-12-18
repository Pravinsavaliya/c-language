#include<stdio.h>
int main() {
    int number;
    printf ("enter your number");
    scanf("%d",&number);

    if (number>0)
    {
        printf("\nnumber is +positive");
    }else if (number<0)
    {
        printf("\n number is -negitive");
    }else{
        printf("\n number is zero");
    }
    return 0;
}
