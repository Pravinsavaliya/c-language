// 3) TNRN:Tack something Return nothing
#include<stdio.h>
#define pi 3.14
void area(float r){
  
    printf("\n area of circle is %.2f\n",pi*r*r);
} 
void main(){
    int r;
    printf("Enter n:");
    scanf("%d",&r);
    
    area(r);
   
}