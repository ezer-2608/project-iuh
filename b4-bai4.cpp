#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d khong phai la so nguyen to\n", n);
        return 0;
    }

    int SNT = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            SNT = 0;
            break;
        }
    }

    if (SNT) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }

    return 0;
}
