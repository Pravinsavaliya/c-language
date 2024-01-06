// 2) TNRN:Tack nothing Return something
#include<stdio.h>
int mult(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    return a*b;
} 
void main(){
    printf("\n multiplication is %d",mult());
   
}