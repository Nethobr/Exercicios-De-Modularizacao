#include <stdio.h> 					//bibliot�ca padr�o
#include <math.h>  					//bibliot�ca para opera��es matem�ticas

int funcExpo(int x, int y)			//Fun��o da exponencia��o
{
	//VARI�VEIS
	int i, calc = 1;
	
	//IN�CIO
	if (y == 0)				//Expoente = 0
	{
		printf("Todo n�mero elevado a 0 � 1, logo: %d por 0 � 1.\n", x);
	}
	else if (x < 0)			//N�mero negativo
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
	//VARI�VEIS
	int num, expo;
	
	//IN�CIO
	printf("Escreva o n�mero: ");
	scanf("%d", &num);
	printf("Escreva o expoente: ");
	scanf("%d", &expo);
	
	funcExpo(num, expo);
	
	return 0;	
}
