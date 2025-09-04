#include <stdio.h>
int main(){
    int num,i;
    unsigned long long factorial=1;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    i=1;
    if(num<0){
        printf("Factorial is not defined for negative numbers.\n");
    }else{
        do{
            factorial*=i;
            i++;
        }while(i<=num);
        printf("Factorial of %d is %llu\n",num,factorial);
    }
    return 0;
}
