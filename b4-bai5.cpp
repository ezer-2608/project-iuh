#include <stdio.h>
#include <math.h>

int main() {
    int n, tongSNT = 0;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int SNT = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                SNT = 0;
                break;
            }
        }
        if (SNT) {
            tongSNT += i;
        }
    }

    printf("Tong cac so nguyen to tu 2 den %d la: %d\n", n, tongSNT);
    return 0;
}
