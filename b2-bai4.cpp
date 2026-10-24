#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    // Hoán đổi giá trị
    c = a;
    a = b;
    b = c;

    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}
