#include <stdio.h>
int main() {
  int n, sum = 0;
  
  printf("\nNhap vao so n: ");
  scanf("%d", &n);
  
  for(int i = 1; i < n; i +=2){
  	
    sum = sum + i;
  }
  
   int i = 1;
   while(i < n){
   sum += i;
    i += 2;
  }

  printf("\nTong cac so le tu 1 den %d la: %d", n, sum);
 
  printf("\n--------------------------------------\n");

}
