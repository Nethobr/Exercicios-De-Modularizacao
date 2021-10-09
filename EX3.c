#include <stdio.h> 								//bibliotéca padrão
#include <math.h>  								//bibliotéca para operações matemáticas

int funcMedA (int a, int b, int c)				//Função: Média aritimética
{
	//VARIÁVEIS
	int calc;
	
	//INÍCIO
	calc = (a + b + c)/3;
	
	printf("%d.\n\n", calc);
}

int funcMedP (int a, int b, int c)				//Função: Média ponderada
{
	//VARIÁVEIS
	int calc;
	
	//INÍCIO
	calc = ((a*5)+(b*3)+(c*2))/(5+3+2);
	
	printf("%d.\n\n", calc);
}

float funcMedH (float a, float b, float c)		//Função: Média harmônica
{
	//VARIÁVEIS
	float calc = 0;
	
	//INÍCIO	
	calc = 3/((1/a)+(1/b)+(1/c));
	
	printf("%.2f.\n\n", calc);
}

int procdMod (int mod, int a, int b, int c)		//Procedimento do modelo da média
{
	switch (mod)
	{
		case 1:
			printf("Média aritimética: ");
			funcMedA(a, b, c);
		break;
		
		case 2:
			printf("Média ponderada: ");
			funcMedP(a, b, c);
		break;
		
		case 3:
			printf("Média harmônica: ");
			funcMedH(a, b, c);
		break;
		
		default:
			printf("Modelo não registrado.\n\n");
	}
}
int procdMenu ()								//Procedimento do menu
{
	//VARIÁVEIS
	int a, b, c, mod = 0;
	
	//INÍCIO
	do
	{
		printf("Escreva as notas (Para encerar o programa digite 0 em umas das notas): \n");
		scanf("%d %d %d", &a, &b, &c);
		if (a != 0 && b!= 0 && c!=0)
		{
			printf("Escolha o modelo da média: ");
			scanf("%d", &mod);
			
			procdMod(mod, a, b, c);
		}
	}while(a != 0 && b != 0 && c!=0);
}
int main()										//Main
{
	procdMenu();
	printf("Fim.");
	return 0;	
}
