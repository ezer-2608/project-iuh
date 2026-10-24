#include <stdio.h>

int main(){
	char tenSP[50];
	int soluong;
	float dongia;
	
	printf("nhap ten san pham: "); //khong duoc ghi ten co khoang trang
	scanf(" %49[^\n]", tenSP);
	printf("nhap so luong san pham: ");
	scanf("%d", &soluong);
	printf("nhap don gia san pham: ");
	scanf("%f", &dongia);
	
	float tien = soluong * dongia;
	float thue = tien * 0.1f;
	
	printf("******THONG TIN DON HANG****** \n");
	printf("san pham: %s\n", tenSP);
	printf("tien = %.2f\n", tien);
	printf("thue = %.2f\n", thue);
	
	return 0;
}