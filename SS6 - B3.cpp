#include<stdio.h>

int main(){
	printf("Moi ban nhap mat khau: ");
	int Number;
	
	do{
		scanf("%d", &Number);
		if(Number==123456789){
			printf("Mat khau dung!");
			break;
}
		else
		printf("Khong dung roi moi ban nhap lai: \n");
	}
	while(true);
	
	return 0;
}
