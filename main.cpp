#include<stdio.h>
#include<omp.h>

recebeFrase(){
	char frase[200];
  	printf("Digite a frase: ");
	gets(frase);
	printf("A frase armazenada foi: %s", frase);
}
questao01(char* frase[]){
	int quantLetras[26];
	#pragma omp parallel 
	{
		
	}	
}

int main(){
	printf("%s",recebeFrase());

	
}