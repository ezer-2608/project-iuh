#include <stdio.h>

int main() {
    int arr[4];
    printf("Nhap 4 so nguyen: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Cac so theo thu tu tang dan la: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
