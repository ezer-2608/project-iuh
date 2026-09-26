#include <stdio.h>

int main(){
	float PI = 3.14159, r;
	
	printf("Nhap ban kinh duong tron: ");
	scanf("%f", &r);
	float chuvi = 2 * PI * r, dientich = PI * r * r;
	
	printf("chu vi: %.2f\n", chuvi);
	printf("dien tich: %.2f\n", dientich);
	
	return 0;
}
