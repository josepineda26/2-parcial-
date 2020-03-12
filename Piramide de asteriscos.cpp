#include<stdio.h>
#include<stdlib.h>

int main(){
int x;
printf("Introduce la cantidad de asteriscos: ");
scanf("%d", &x);
for(int i=1; i<=x; i++){
	for(int j=0; j<=x-i; j++)
	printf(" ");
	for(int j=0; j<=i-1; j++)
	printf("* ");
	printf("\n");
}
}
