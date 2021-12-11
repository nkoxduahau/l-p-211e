//Viet chuong trinh tinh n! biet n! = 1.2.3.4… n
#include "stdio.h"
int main(){
	int n, gt;
	
	do{
		printf("\nNhap vao n (n>=0)");
		scanf("%d", &n);
	}while(n<0);
	
	gt=1;
	for(int i=1; i<=n; i++){
		gt = gt * i;
	}
	printf("n! = %d", gt);
}
