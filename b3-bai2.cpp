#include <stdio.h>

int main() {
    char c;
    printf("Nhap mot chu cai: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
        c = c - 32; // Chuyen thanh chu hoa
        printf("Chu sau khi doi thanh chu hoa: %c\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        c = c + 32; // Chuyen thanh chu thuong
        printf("Chu sau khi doi thanh chu thuong: %c\n", c);
    } else {
        printf("Khong phai la chu cai hop le!\n");
    }

    return 0;
}
