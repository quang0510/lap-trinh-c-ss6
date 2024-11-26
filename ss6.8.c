#include<stdio.h>
int main(){
	
	float soTien, laiSuat, soThangGui, tienLai, tongTien;
	printf("moi ban nhap so tien muon gui ");
	scanf("%f", &soTien);
	printf("moi ban nhap vao lai suat ");
	scanf("%f", &laiSuat);
	printf("moi ban nhap so thang muon gui ");
	scanf("%f", &soThangGui);
	for(int i=1;i<=soThangGui;i++){
		tienLai=soTien*(laiSuat/12)*soThangGui;
	}
	printf("so tien lai la %f \n", tienLai);
	tongTien=soTien+tienLai;
	printf("tong so tien nhan duoc la %f ", tongTien);
	
	return 0;
	
}
