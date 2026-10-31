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
        tien = km * 15000;[span_3](start_span)[span_3](end_span)
    } else if (km <= 5) {
        tien = 1 * 15000 + (km - 1) * 13500;[span_4](start_span)[span_4](end_span)
    } else {
        tien = 1 * 15000 + 4 * 13500 + (km - 5) * 11000;[span_5](start_span)[span_5](end_span)
    }

    // Neu tren 120km duoc giam 10% tong tien[span_6](start_span)[span_6](end_span)
    if (km > 120) {
        tien = tien * 0.9;
    }

    printf("Tong tien taxi phai tra la: %.2f VND\n", tien);
    return 0;
}
