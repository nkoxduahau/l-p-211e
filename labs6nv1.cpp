//Tinh tong so cac chu cua 1 so nguyên n
#include "stdio.h"
int main(){
    int n;
    int a;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        a = n % 10;
        s += a;
        n /= 10;
    }    
    printf("tong: %d",s);
}
