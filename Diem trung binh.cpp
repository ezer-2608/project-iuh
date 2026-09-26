#include <stdio.h>

int main(){
	float toan, li, hoa;
	float hsToan, hsLi, hsHoa;
	
	printf("Nhap diem Toan va he so mon Toan: ");
	scanf("%f %f", &toan, &hsToan);
	printf("Nhap diem Li va he so mon Li: ");
	scanf("%f %f", &li, &hsLi);
	printf("Nhap diem Hoa va he so mon Hoa: ");
	scanf("%f %f", &hoa, &hsHoa);
	
	float DiemTB = (toan*hsToan + li*hsLi + hoa*hsHoa) / (hsToan + hsLi + hsHoa);
	printf("Diem trung binh cua ban la: %.2f", DiemTB);
	return 0;
}
