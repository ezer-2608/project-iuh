#include <stdio.h>

int main(){
    int n, tong_le = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++){
        if (i % 2 != 0) {
        tong_le += i;
        }
    }

    printf("tong cac so le tu 1 den %d la: %d\n", n, tong_le);
    return 0;
}
