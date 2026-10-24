#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, chuvi, nua_chuvi, dientich;

    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);

    chuvi = a + b + c;
    nua_chuvi = chuvi / 2;

    // Công thức Heron: S = sqrt(p * (p - a) * (p - b) * (p - c))
    dientich = sqrt(nua_chuvi * (nua_chuvi - a) * (nua_chuvi - b) * (nua_chuvi - c));

    printf("Chu vi tam giac = %.2f\n", chuvi);
    printf("Dien tich tam giac = %.2f\n", dientich);

    return 0;
}
