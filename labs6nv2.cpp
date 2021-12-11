// Nhap 1 so nguyen n. Tim so dao nguoc cua n
#include "stdio.h"
 
int main(){
    int n,b;
    printf(" N =");
    scanf("%d", &n);
    int x = 0;
    while(n > 0){
        b = n % 10;
        x = x * 10 + b;
        n = n / 10;
    }
    printf("so dao nguoc la: %d ", x);
}
