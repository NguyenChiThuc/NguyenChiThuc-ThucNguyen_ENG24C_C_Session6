#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a/2; i++)
	if(a%i==0)
	printf("%d \n", i);
	printf("%d", a);
	return 0;
}
