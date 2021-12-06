#include <stdio.h>
int main ()
{
	int a,b,c,d,e,f,g;
printf("Nhap ngay thang nam: \n");
printf("Nhap ngay: "); scanf("%d",&a);
printf("Nhap thang: "); scanf("%d",&b);
printf("Nhap nam: "); scanf("%d",&c);
if(c%4==0 && b>=3 || c%4!=0 || c%4==0 && b==2 && a==29)
d=c*365+c/4-1;
if(b==1)
e=0;
else if(b==2)
e=31;
else if(b==3)
e=31+28;
else if(b==4)
e=31+28+31;
else if(b==5)
e=31+28+31+30;
else if(b==6)
e=31+28+31+30+31;
else if(b==7)
e=31+28+31+30+31+30;
else if(b==8)
e=31+28+31+30+31+30+31;
else if(b==9)
e=31+28+31+30+31+30+31+31;
else if(b==10)
e=31+28+31+30+31+30+31+31+30;
else if(b==11)
e=31+28+31+30+31+30+31+31+30+31;
else if(b==12)
e=31+28+31+30+31+30+31+31+30+31+30;
else printf("error");
f=a+d+e-1;
g=f%7;
printf("ngay %d thang %d nam %d la: ",a,b,c);
switch (g)
{
case 1:
printf("thu 2");
break;
case 2:
printf("thu 3");
break;
case 3:
printf("thu 4");
break;
case 4:
printf("thu 5");
break;
case 5:
printf("thu 6");
break;
case 6:
printf("thu 7");
break;
default :
printf("chu nhat");
break;
}



printf("\n");




return 0;
}
