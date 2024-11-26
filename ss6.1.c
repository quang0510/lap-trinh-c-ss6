#include<stdio.h>
int main(){
	
	int a, tongSoLe=0;
	for(int i=1;i<6;i++){
		printf("moi ban nhap so : ");
		scanf("%d", &a);
	  if(a%2!=0){
		tongSoLe+=a;
	}	
	}
	printf("tong cac so le la %d", tongSoLe);
	
	return 0;
	
}

