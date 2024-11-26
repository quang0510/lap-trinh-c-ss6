#include<stdio.h>
int main(){
	int a;
	printf("moi ban nhap vao so nguyen a ");
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
		printf("%d", i);
		if(i%3==0){
			printf("Fizz");
		}else if(i%5==0){
			printf("Buzz");
		}else if(i%3==0 && i%5==0){
			printf("FizzBuzz");
		}
	}
	
	return 0;
}
