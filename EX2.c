#include <stdio.h> 					//bibliotéca padrão
#include <math.h>  					//bibliotéca para operações matemáticas

int funcExpo(int x, int y)			//Função da exponenciação
{
	//VARIÁVEIS
	int i, calc = 1;
	
	//INÍCIO
	if (y == 0)				//Expoente = 0
	{
		printf("Todo número elevado a 0 é 1, logo: %d por 0 é 1.\n", x);
	}
	else if (x < 0)			//Número negativo
	{
		printf("Resultado: ");
		for(i = 1 ; i<=y ; i++)
		{
			calc = calc*x;
			if (i == y)
			{
				printf("%d.", calc);
			}
			else
			{
				printf("%d, ", calc);
			}
		}
	}
	else				//Normal
	{
		for(i = 1 ; i<=y ; i++)
		{
			printf("Resultado: ");
			for(i = 1 ; i<=y ; i++)
			{
				calc = calc*x;
				if (i == y)
				{
					printf("%d.", calc);
				}
				else
				{
					printf("%d, ", calc);
				}
			}
		}
	}
}
int main()							//Main
{
	//VARIÁVEIS
	int num, expo;
	
	//INÍCIO
	printf("Escreva o número: ");
	scanf("%d", &num);
	printf("Escreva o expoente: ");
	scanf("%d", &expo);
	
	funcExpo(num, expo);
	
	return 0;	
}
