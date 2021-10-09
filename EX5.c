#include <stdio.h>								//bibliotéca padrão
#include <math.h> 								//bibliotéca para operações matemáticas
int procdEx1 ()
{
	//VARIÁVEIS
	int 	a, b, c;
	
	//INÍCIO	
	printf("Valor a: ");
	scanf("%d", &a);
	printf("Valor b: ");
	scanf("%d", &b);
	printf("Valor c: ");
	scanf("%d", &c);
	printf("\n");	

	printf("Resultado: %d\n", funcEx1 (a, b, c));
}

int procdEx2 ()									//Procedimento ex2
{
	//VARIÁVEIS
	int 	lin, col, res;

	//INÍCIO	
	printf("Número de linhas: ");
	scanf("%d", &lin);
	printf("Número de colunas: ");
	scanf("%d", &col);
	
	funcEx2(lin, col);
}

int procdEx3 ()									//Procedimento ex3
{
	//VARIÁVEIS
	int 		num;
	
	//INÍCIO	
	printf("Informe o número: ");
	scanf("%d", &num);
	
	printf("Resultado: %d\n", funcEx3 (num)); 
	
	//return num;
}

int procdEx4 ()									//Procedimento ex4
{
	//VARIÁVEIS
	int 	num;
	
	//INÍCIO
	printf("Informe o número: ");
	scanf("%d", &num);
	
	if (num <= 0)
	{
		printf("Não aceitemos esse tipo de valor!\n");
	}
	else
	{
	printf("Resultado: \n");
	funcEx4 (num);
	}
}

int funcEx1 (int a, int b, int c)				//Função do ex1
{
	//VARIÁVEIS
	int 	res;
	
	//INÍCIO
	res = (pow(a, 2)+pow(b, 2)+pow(c, 2));
	
	return res;
}

int funcEx2 (int lin, int col)					//Função ex2
{
	//VARIÁVEIS
	int 	colT, colF, colL;

	//INÍCIO	
	if(lin == 0 || col == 0)					//Verificação
	{
		printf("\nResultado: ");
		printf("Não aceitamos valores = 0\n\n");
	}
	else if (lin < 0 || col < 0)
	{
		printf("\nResultado: ");
		printf("Não aceitamos valores negativos!\n\n");
	}
	else
	{
		printf("\nResultado: \n\n");
		
		lin = lin - 2;
		colT = col - 2;
		colF = col - 2;
		
		printf("+"); 								//linha TOP
			while (colT>0)
			{
				printf("-");
				colT --;
			}
		printf("+\n");
		
		while (lin>0)								//Colunas MID
		{
			colL = col - 2;
			
			printf("|");
				while (colL>0)
				{
					printf(" ");
					colL --;
				}
			printf("|\n");
			
			lin --;
		}
		
		printf("+");								//linha FLOOR
			while (colF>0) 
			{
				printf("-");
				colF --;
			}
		printf("+\n\n");
	}
}

int funcEx3 (int x)								//Função ex3
{
	//VARIÁVEIS
	int 		i;
	
	//INÍCIO
	while (x >= 1)
	{
		//printf ("%d\n", x);
		i++;
		x = x/10;
		//printf ("%d\n", x);
	}
	return i;
}

int funcEx4 (int x)								//Função ex4
{
	//VARIÁVEIS
	int 	i, j, y;
	
	//INÍCIO
	//y = x;
	for (i = 1;i<=x;i++)
	{	
		for (j=1;j<=i;j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}

int funcDecid (int x, int op)					//Função de decisão do menu
{
	if (x == 1)
	{
		op = 5;
	}
	else if (x == 0)
	{
			op = 0;
	}
	else
	{
		int veri = 0;
		do
		{
			printf("Valor não computado, favor insira 1 ou 0: ");
			scanf("%d", &x);
			if(x == 1 || x == 0)
			{
				veri = 1;
			}
			else
			{
				veri = 0;
			}
		}while(veri != 1);
		
		op = veri * x;

		if (op == 1)
		{
			op = 5;
		}
	}
	return op;
}

int main()										//Main
{
	//VARIÁVEIS
	int 	op, decid;
	
	//INÍCIO
	do
	{
		printf("OPÇÕES\n");
		printf("+---------------+\n");
		printf("|1 – Exercício 1|\n|2 – Exercício 2|\n|3 – Exercício 3|\n|4 – Exercício 4|\n|5 – Sair	|\n");
		printf("+---------------+\n");
		printf("Escolha o valor: ");
		scanf("%d", &op);
			
		switch (op)
		{
			case 1:
				printf("+---------------+\n");
				printf("Exercício 1\n");
				procdEx1 ();
				printf("+---------------+\n");
			break;

			case 2:
				printf("+---------------+\n");
				printf("Exercício 2\n");
				procdEx2 ();
				printf("+---------------+\n");	
			break;
			
			case 3:
				printf("+---------------+\n");
				printf("Exercício 3\n");
				procdEx3 ();
				printf("+---------------+\n");
			break;
			
			case 4:
				printf("+---------------+\n");
				printf("Exercício 4\n");
				procdEx4 ();
				printf("+---------------+\n");
			break;
			
			case 5:
				printf("Você escolheu sair, tem certaza? (1 - 0): ");
				scanf("%d", &decid);
				op = funcDecid (decid, op);
			break;
			
			default:
				printf("Valor não registrado!\n");
				printf("+---------------+\n");
		}
	}while (op !=5);
	
	printf("+---------------+\n");
	printf("Fim do programa.");
	return 0;	
}
