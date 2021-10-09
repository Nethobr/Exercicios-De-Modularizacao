#include <stdio.h>								//bibliot�ca padr�o
#include <math.h> 								//bibliot�ca para opera��es matem�ticas
int procdEx1 ()
{
	//VARI�VEIS
	int 	a, b, c;
	
	//IN�CIO	
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
	//VARI�VEIS
	int 	lin, col, res;

	//IN�CIO	
	printf("N�mero de linhas: ");
	scanf("%d", &lin);
	printf("N�mero de colunas: ");
	scanf("%d", &col);
	
	funcEx2(lin, col);
}

int procdEx3 ()									//Procedimento ex3
{
	//VARI�VEIS
	int 		num;
	
	//IN�CIO	
	printf("Informe o n�mero: ");
	scanf("%d", &num);
	
	printf("Resultado: %d\n", funcEx3 (num)); 
	
	//return num;
}

int procdEx4 ()									//Procedimento ex4
{
	//VARI�VEIS
	int 	num;
	
	//IN�CIO
	printf("Informe o n�mero: ");
	scanf("%d", &num);
	
	if (num <= 0)
	{
		printf("N�o aceitemos esse tipo de valor!\n");
	}
	else
	{
	printf("Resultado: \n");
	funcEx4 (num);
	}
}

int funcEx1 (int a, int b, int c)				//Fun��o do ex1
{
	//VARI�VEIS
	int 	res;
	
	//IN�CIO
	res = (pow(a, 2)+pow(b, 2)+pow(c, 2));
	
	return res;
}

int funcEx2 (int lin, int col)					//Fun��o ex2
{
	//VARI�VEIS
	int 	colT, colF, colL;

	//IN�CIO	
	if(lin == 0 || col == 0)					//Verifica��o
	{
		printf("\nResultado: ");
		printf("N�o aceitamos valores = 0\n\n");
	}
	else if (lin < 0 || col < 0)
	{
		printf("\nResultado: ");
		printf("N�o aceitamos valores negativos!\n\n");
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

int funcEx3 (int x)								//Fun��o ex3
{
	//VARI�VEIS
	int 		i;
	
	//IN�CIO
	while (x >= 1)
	{
		//printf ("%d\n", x);
		i++;
		x = x/10;
		//printf ("%d\n", x);
	}
	return i;
}

int funcEx4 (int x)								//Fun��o ex4
{
	//VARI�VEIS
	int 	i, j, y;
	
	//IN�CIO
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

int funcDecid (int x, int op)					//Fun��o de decis�o do menu
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
			printf("Valor n�o computado, favor insira 1 ou 0: ");
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
	//VARI�VEIS
	int 	op, decid;
	
	//IN�CIO
	do
	{
		printf("OP��ES\n");
		printf("+---------------+\n");
		printf("|1 � Exerc�cio 1|\n|2 � Exerc�cio 2|\n|3 � Exerc�cio 3|\n|4 � Exerc�cio 4|\n|5 � Sair	|\n");
		printf("+---------------+\n");
		printf("Escolha o valor: ");
		scanf("%d", &op);
			
		switch (op)
		{
			case 1:
				printf("+---------------+\n");
				printf("Exerc�cio 1\n");
				procdEx1 ();
				printf("+---------------+\n");
			break;

			case 2:
				printf("+---------------+\n");
				printf("Exerc�cio 2\n");
				procdEx2 ();
				printf("+---------------+\n");	
			break;
			
			case 3:
				printf("+---------------+\n");
				printf("Exerc�cio 3\n");
				procdEx3 ();
				printf("+---------------+\n");
			break;
			
			case 4:
				printf("+---------------+\n");
				printf("Exerc�cio 4\n");
				procdEx4 ();
				printf("+---------------+\n");
			break;
			
			case 5:
				printf("Voc� escolheu sair, tem certaza? (1 - 0): ");
				scanf("%d", &decid);
				op = funcDecid (decid, op);
			break;
			
			default:
				printf("Valor n�o registrado!\n");
				printf("+---------------+\n");
		}
	}while (op !=5);
	
	printf("+---------------+\n");
	printf("Fim do programa.");
	return 0;	
}
