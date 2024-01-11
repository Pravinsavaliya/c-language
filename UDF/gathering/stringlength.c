#include<stdio.h>
int length(char arr[30]){
    int i,count=0;
    for(i=0;arr[i] !='\0';i++){
        count++;
    }
    return count;
}
void main(){
    char name[20];
    printf("Enter name:");
    scanf("%s",&name);
    printf("name length is : %d",length(name));
}