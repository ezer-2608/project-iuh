#include <stdio.h>
#include <math.h>

int main() {
    float canh_a, canh_b, canh_c, chu_vi, nua_chu_vi, dien_tich;

    printf("Nhap canh a: ");
    scanf("%f", &canh_a);
    printf("Nhap canh b: ");
    scanf("%f", &canh_b);
    printf("Nhap canh c: ");
    scanf("%f", &canh_c);

    chu_vi = canh_a + canh_b + canh_c;
    nua_chu_vi = chu_vi / 2;[span_4](start_span)[span_4](end_span)
    
    // Công thức Heron: S = sqrt(p * (p - a) * (p - b) * (p - c))[span_5](start_span)[span_5](end_span)
    dien_tich = sqrt(nua_chu_vi * (nua_chu_vi - canh_a) * (nua_chu_vi - canh_b) * (nua_chu_vi - canh_c));[span_6](start_span)[span_6](end_span)

    printf("Chu vi tam giac = %.2f\n", chu_vi);
    printf("Dien tich tam giac = %.2f\n", dien_tich);

    return 0;
}
