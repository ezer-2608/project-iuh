#include <stdio.h>

int main() {
    int bien_a, bien_b, trung_gian;

    printf("Nhap a: ");
    scanf("%d", &bien_a);
    printf("Nhap b: ");
    scanf("%d", &bien_b);

    // Hoán đổi giá trị
    trung_gian = bien_a;
    bien_a = bien_b;
    bien_b = trung_gian;

    printf("Sau khi hoan doi: a = %d, b = %d\n", bien_a, bien_b);

    return 0;
}
