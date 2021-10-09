#include <stdio.h>						//bibliotéca padrão
#include <math.h>						//bibliotéca para operações matemáticas
int funcCalc(int x)						//Função do calculo
{
	//VARIÁVEIS
	int 	i, soma = 0;
	float	div = 0;
	
	//INÍCIO
	if(x > 0)				//Vereficação
	{
		printf("Divisíveis por %d\n", x);
		for (i=1;i<=x;i++)
		{
			div = x%i;		//Resto de divisão
			
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
			printf("Número perfeito!");
		}
		else
		{
			printf("Esse número não é perfeito!");
		}
	}
	else
	{
		printf("Número negativo.");
	}
}
int main()								//Main
{
	//VARIÁVEIS
	int num, recb;
	
	//INÍCIO
	printf("Escreva o número: ");
	scanf("%d", &num);
	
	funcCalc(num);
	
	return 0;	
}
