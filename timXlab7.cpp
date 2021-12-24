#include <stdio.h>
int main(){
	int arr[4];
	int x;
	
	x = 10;
	
	arr[0] = 15; 
	arr[3] = 2;
	arr[1] = 10;
	arr[2] = 8;
	
	int arr2[2000];

	printf("Nhap x=");
	scanf("%d",&x);

	printf("Nhap arr2[3] = ");
	scanf("%d",&arr2[3]);
	
	
	for(int i=0;i<2000;i++){
		printf("Nhap gia tri cho arr2[%d]:",i);
		scanf("%d",&arr2[i]); // arr2[0]  arr2[1]
	}

}
