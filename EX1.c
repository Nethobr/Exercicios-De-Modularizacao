#include <stdio.h>						//bibliot�ca padr�o
#include <math.h>						//bibliot�ca para opera��es matem�ticas
int funcCalc(int x)						//Fun��o do calculo
{
	//VARI�VEIS
	int 	i, soma = 0;
	float	div = 0;
	
	//IN�CIO
	if(x > 0)				//Verefica��o
	{
		printf("Divis�veis por %d\n", x);
		for (i=1;i<=x;i++)
		{
			div = x%i;		//Resto de divis�o
			
			if (div == 0)
			{	
				if(i != x)
				{
					printf("%d", i);
					printf(", ");
					soma = soma + i;
				}
			}
		}
		
		if (soma == x)
		{
			printf("SOMA: %d\n", soma);
			printf("N�mero perfeito!");
		}
		else
		{
			printf("Esse n�mero n�o � perfeito!");
		}
	}
	else
	{
		printf("N�mero negativo.");
	}
}
int main()								//Main
{
	//VARI�VEIS
	int num, recb;
	
	//IN�CIO
	printf("Escreva o n�mero: ");
	scanf("%d", &num);
	
	funcCalc(num);
	
	return 0;	
}
