#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num; 
	int num1 = 0; 
	int num2 = 1;
	int num3 = 1;
	
	printf("Insira o n�mero:\n");
	scanf("%d", &num);
	
	while(num > num1){
		num1 = num2 + num3;
		num3 = num2;
		num2 = num1;
	}
	
	if(num1 == num){
		printf("Pertence a sequ�ncia");
		
	} else {
		printf("N�o pertence a sequ�ncia");
	}
}

