#include<stdio.h>
#include<stdlib.h>
void main(){
	int nota1;
	int nota2;
	int nota3;
	int resultado;
	printf("insira a nota 1:");
	scanf("%d",&nota1);
	printf("insira a nota 2:");
	scanf("%d",&nota2);
	printf("insira a nota 3:");
	scanf("%d",&nota3);
	resultado = (nota1+nota2+nota3)/3;
	if(resultado>=7){
		printf("Aprovado");}
	else{
		printf("Reprovado");}
}
