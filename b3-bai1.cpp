#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so bat ki: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {
        printf("Doc gia tri: ");
        switch (n) {
            case 1: printf("Mot\n"); break;
            case 2: printf("Hai\n"); break;
            case 3: printf("Ba\n"); break;
            case 4: printf("Bon\n"); break;
            case 5: printf("Nam\n"); break;
            case 6: printf("Sau\n"); break;
            case 7: printf("Bay\n"); break;
            case 8: printf("Tam\n"); break;
            case 9: printf("Chin\n"); break;
        }
    } else {
        printf("Không đọc được\n");
    }

    return 0;
}
