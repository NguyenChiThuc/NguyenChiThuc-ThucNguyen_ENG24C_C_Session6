#include<stdio.h>

int main(){
	int number[5];
	int sosole=0;
	int sosochan=0;
	
	printf("Moi ban nhap 5 so nguyen duong\n");
	for(int i=1; i<6; i++){
		printf("Moi ban nhap so thu %d: ", i);
		scanf("%d", &number[i]);
	}
	for(int i=1; i<6; i++){
	if(number[i]%2==0){
		sosochan++;
	}
	else{ 
	sosole++;
	}
}
	printf("So so chan la %d \n", sosochan);
	printf("So so le la %d", sosole);
	
	return 0;
}
