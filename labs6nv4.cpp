//Nhap 1 so nguyên n. Tìm so hoan thien nho hon n
#include "stdio.h"
int main(){
   int n, x = 0, i;
   printf(" Nhap n =");
   scanf("%d",&n);
   for(i=1 ; i<n; i++){
   	if(n % i ==0)  {
   		x = x +i;
   		}
   	}
	   if(x == n){
	   printf("%d la so hoan hao\n",n);
	}  else {
	printf("%d khong phai so hoan hao", n);   	
   }
   }
