#include <stdio.h>
int main(){
    int n,i=1;
    unsigned long long f=1;
    scanf("%d",&n);
    while(i<=n){
        f*=i;
        i++;
    }
    printf("%llu\n",f);
    return 0;
}
