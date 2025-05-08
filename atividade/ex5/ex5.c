#include <stdio.h>
#include <stdlib.h>
void main(){
	int cel;
	int fah;
	printf("Digite a temperatura em graus celsius:\n");
	scanf("%d",&cel);
	fah = cel * 9/5 + 32;
	printf("A temperatura em fahrenheit é: %d\n", fah);
}

