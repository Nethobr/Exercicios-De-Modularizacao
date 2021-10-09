#include <stdio.h> 								//bibliot�ca padr�o
#include <math.h>  								//bibliot�ca para opera��es matem�ticas

int funcMedA (int a, int b, int c)				//Fun��o: M�dia aritim�tica
{
	//VARI�VEIS
	int calc;
	
	//IN�CIO
	calc = (a + b + c)/3;
	
	printf("%d.\n\n", calc);
}

int funcMedP (int a, int b, int c)				//Fun��o: M�dia ponderada
{
	//VARI�VEIS
	int calc;
	
	//IN�CIO
	calc = ((a*5)+(b*3)+(c*2))/(5+3+2);
	
	printf("%d.\n\n", calc);
}

float funcMedH (float a, float b, float c)		//Fun��o: M�dia harm�nica
{
	//VARI�VEIS
	float calc = 0;
	
	//IN�CIO	
	calc = 3/((1/a)+(1/b)+(1/c));
	
	printf("%.2f.\n\n", calc);
}

int procdMod (int mod, int a, int b, int c)		//Procedimento do modelo da m�dia
{
	switch (mod)
	{
		case 1:
			printf("M�dia aritim�tica: ");
			funcMedA(a, b, c);
		break;
		
		case 2:
			printf("M�dia ponderada: ");
			funcMedP(a, b, c);
		break;
		
		case 3:
			printf("M�dia harm�nica: ");
			funcMedH(a, b, c);
		break;
		
		default:
			printf("Modelo n�o registrado.\n\n");
	}
}
int procdMenu ()								//Procedimento do menu
{
	//VARI�VEIS
	int a, b, c, mod = 0;
	
	//IN�CIO
	do
	{
		printf("Escreva as notas (Para encerar o programa digite 0 em umas das notas): \n");
		scanf("%d %d %d", &a, &b, &c);
		if (a != 0 && b!= 0 && c!=0)
		{
			printf("Escolha o modelo da m�dia: ");
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
