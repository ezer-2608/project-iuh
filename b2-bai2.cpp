#include <stdio.h>
#include <math.h>

int main(){
    float cgv1, cgv2, dientich, canhhuyen;

    printf("Nhap canh goc vuong 1: ");
    scanf("%f", &cgv1);
    printf("Nhap canh goc vuong 2: ");
    scanf("%f", &cgv2);
    dientich = (cgv1 * cgv2) / 2;
    canhhuyen = sqrt(pow(cgv1, 2) + pow(cgv2, 2));

    printf("Dien tich tam giac vuong: %.3f\n" , dientich);
    printf("Canh huyen tam giac vuong: %.3f\n" , canhhuyen);
    return 0;
}
