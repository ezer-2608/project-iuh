#include <stdio.h>

int main(){
    int n, tong = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++)
    {
        tong += i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
    return 0;
}
