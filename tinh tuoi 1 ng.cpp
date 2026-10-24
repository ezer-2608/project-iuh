#include <stdio.h>

int main(){
    int namsinh;
    int namhientai;
    
    printf("nhap namsinh: ");
    scanf("%d", &namsinh);
    printf("nhap namhientai: ");
    scanf("%d", &namhientai);
    
    int tuoi = namhientai - namsinh;
    printf("tuoi hien tai cua ban la: %d", tuoi);

    return 0;
}