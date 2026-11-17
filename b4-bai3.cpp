#include <stdio.h>

int main(){
    int n, tong_chan = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++){
        if (i % 2 == 0) {
        tong_chan += i;
        }
    }

    printf("tong cac so chan tu 1 den %d la: %d\n", n, tong_chan);
    return 0;
}
