#include<stdio.h>
int main(){
	int month, year;
	printf("moi ban nhap thang ");
	scanf("%d", &month);
	printf("moi ban nhap vao nam ");
	scanf("%d", &year);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		  printf("thang %d nam %d co 31 ngay", month, year);	
		break;
		case 9:
		case 4:
		case 6:
		case 11:
		  printf("thang %d nam %d co 30 ngay", month, year);
		break;
		case 2:
		  if(year%400==0||year%4==0&&year%100!=0){
		  	printf("thang 2 nam %d co 29 ngay", year);
		  }else{
		  	printf("thang 2 nam %d co 28 ngay", year);
		  	
		  }
		
	}
	return 0;
	
}
