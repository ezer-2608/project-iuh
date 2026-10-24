#include <stdio.h>

int main() {
    int so_a, so_b;
    
    printf("Nhap so a (3 chu so): ");
    scanf("%d", &so_a);
    printf("Nhap so b (3 chu so): ");
    scanf("%d", &so_b);

    int hang_don_vi = so_b % 10;
    int hang_chuc = (so_b / 10) % 10;
    int hang_tram = so_b / 100;

    int tich_1 = so_a * hang_don_vi;
    int tich_2 = so_a * hang_chuc;
    int tich_3 = so_a * hang_tram;
    int ket_qua = so_a * so_b;

    printf("\n%d\n", so_a);
    printf("x %d\n", so_b);
    printf("-----\n");
    printf("%5d\n", tich_1);
    printf("%4d\n", tich_2);
    printf("%3d\n", tich_3);
    printf("-----\n");
    printf("%5d\n", ket_qua);

    return 0;
}
