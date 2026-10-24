#include <stdio.h>

int main(){
	int soxe;
	
	printf("Nhap so xe: ");
	scanf("%d", &soxe);
	
	int d1 = soxe / 1000;
	int d2 = ( soxe / 100 ) % 10; 
	int d3 = ( soxe / 10 ) % 10; 
	int d4 = soxe % 10; 
	
	int tong = d1 + d2 + d3 + d4;
	int sonut = tong % 10;
	printf("so xe cua ban duoc: %d nut\n", sonut);
	
	return 0;
}