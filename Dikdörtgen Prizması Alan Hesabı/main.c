#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    int taban_alani;
    int yanal_alan;
    int toplam_alan;
    int hacim;
    printf("Dikdortgen prizmasinin uzunluklarini giriniz.\n");
    scanf("%d%d%d",&a,&b,&h);


    taban_alani=a*b;
    yanal_alan=2*a*h+2*b*h;
    hacim=a*b*h;
    toplam_alan = 2*a*b+2*a*h+2*b*h;
    printf("Taban alani=%d\n",taban_alani);
    printf("Yanal alanlar toplami=%d\n",yanal_alan);
    printf("Hacmim= %d",hacim);
    printf("Toplam alani %d\n",toplam_alan);

}
