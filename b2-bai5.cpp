#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so a (3 chu so): ");
    scanf("%d", &a);
    printf("Nhap so b (3 chu so): ");
    scanf("%d", &b);

    int hang_donvi = b % 10;
    int hang_chuc = (b / 10) % 10;
    int hang_tram = b / 100;

    int tich1 = a * hang_donvi;
    int tich2 = a * hang_chuc;
    int tich3 = a * hang_tram;
    int ketqua = a * b;

    printf("\n  %d\n", a);
    printf("x %d\n", b);
    printf("-----\n");
    printf("%5d\n", tich1);
    printf("%4d\n", tich2);
    printf("%3d\n", tich3);
    printf("-----\n");
    printf("%5d\n", ketqua);

    return 0;
}
