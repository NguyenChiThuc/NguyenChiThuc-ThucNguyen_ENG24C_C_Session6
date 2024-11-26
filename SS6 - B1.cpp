#include<stdio.h>

int main(){
	
	int number[5];
	int sum;
	
	printf("Moi ban nhap 5 so nguyen duong\n");
	for(int i=1; i<6; i++)
	{ printf("Moi ban nhap so thu %d:  ", i);
		scanf("%d", &number[i]);
		
	}
	for(int i=1; i<6; i++){
		if(number[i]%2!==0){
			sum+=number[i];
		}
	}
	printf("tong cua cac so le la: %d", sum);
	
	return 0;
}
