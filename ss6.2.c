#include<stdio.h>
int main(){
	
	int a, soLuongsochan=0, soLuongsole=0;
	for(int i=1;i<6;i++){
		printf("moi ban nhap vao so nguyen : ");
		scanf("%d", &a);
	   if(a%2==0){
	        soLuongsochan++;
	}  else{
	        soLuongsole++;
	}
		
	}
	printf("co tat ca %d so chan\n", soLuongsochan);
	printf("co tat ca %d so le", soLuongsole);
	
	return 0;
	
}
