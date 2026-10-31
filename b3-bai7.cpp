#include <stdio.h>

int main() {
    float km, tien = 0;
    printf("Nhap so km di taxi: ");
    scanf("%f", &km);

    if (km <= 0) {
        printf("So km khong hop le!\n");
        return 0;
    }

    if (km <= 1) {
        tien = km * 15000;
    } else if (km <= 5) {
        tien = 15000 + (km - 1) * 13500;
    } else {
        tien = 15000 + 4 * 13500 + (km - 5) * 11000;
    }

    // Neu tren 120km duoc giam 10% tong tien
    if (km > 120) {
        tien = tien * 0.9;
    }

    printf("Tong tien taxi phai tra la: %.f VND\n", tien);
    return 0;
}
