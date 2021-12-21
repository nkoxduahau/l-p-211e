#include<stdio.h>
int main()
{
    float tiengui,tienlai,tyle;
    int nam;
    printf("So Tien Ban Dau La: ");
    scanf("%f",&tiengui);
    printf("Lai Xuat La :");
    scanf ("%f",&tyle);
    printf("Nhap So Nam Muon Gui La :");
    scanf("%d",&nam);
    for(int i = 1 ; i <= nam ; i ++)
    {
        tienlai = tyle*tiengui/100;
        tiengui+=tienlai;
        printf("Sau %d nam.   %.2f  Tong %.2f tien lai \n",i,tienlai,tiengui);
    }
}
