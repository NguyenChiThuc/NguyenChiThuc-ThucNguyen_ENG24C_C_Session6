#include<stdio.h>

int main(){
	
	int thang;
	int nam;
	printf("Moi ban nhap thang va nam");
	scanf("%d %d", &thang, &nam);
	
	if(thang<=7)
	{
		if(thang%2==1)
		printf("thang co 31 ngay");
		else if(thang!=2)
		printf("Thang co 30 ngay");
	}else{ if(thang%2==1)
			printf("Thang co 30 ngay");
		else 	
			printf("Thang co 31 ngay");
	}
		if(thang==2)
		{
			if(nam%4==0)
		printf("Thang co 29 ngay");
		else
		printf("Thang co 28 ngay");
	}
	
	return 0;	
		
	}
