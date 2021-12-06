#include <stdio.h>

int main()
{
    float so_tien=100000;
    int so_nam = 4;
    float lai_suat = (8.0/100);
    float tong_tien=so_tien;

    for (int i=0 ; so_nam > i; i+= 1)
       {
        float lai= lai_suat * tong_tien;
         tong_tien += lai;
          printf( "\tso tien lai la %.3f \tong so tien co dc la %.3f\n ",lai,tong_tien);
          
          
          
        if (i==so_nam-1)
             printf( "vay so tien ban co gap %.3f lan so tien ban dau", (tong_tien/so_tien));
        }
    return 0;
}
