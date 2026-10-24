#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, kc;

    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input y1: ");
    scanf("%f", &y1);
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input y2: ");
    scanf("%f", &y2);

    kc =  sqrt(pow(x2 -x1, 2) + pow(y2 - y1, 2));
    printf("khoang cach giua 2 diem trong mat phang toa do: %4f\n", kc);
    return 0;
}
