#include <stdio.h> //bibliot�ca padr�o
#include <math.h>  //bibliot�ca para opera��es matem�ticas

int funcCalc(int x)								//Fun��o do calculo
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

int funcExpo(int x, int y)						//Fun��o da exponencia��o
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

float funColi (float x, float y, float z)		//Fun��o da colis�o
{
	//VARI�VEIS
	float		d = 0;
	
	//IN�CIO
	d = sqrt((pow(((x*2)-(x*1)), 2))+(pow(((y*2)-(y*1)), 2))+(pow(((z*2)-(z*1)), 2)));
	return d;
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
	
int funcEx1 (int a, int b, int c)				//Fun��o ex1
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
	
int procdEx1 ()									//Procedimento ex1
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

int procdRes(int val)							//Procedimento de colis�o
{
	if(val != 0)
	{
		printf("Objeto n�o colidiu!");
	}
	else
	{
		printf("Objeto colidiu!");
	}
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

int procdEnum1()								//Procedimento Enumciadoo 1
{
	//VARI�VEIS
	int num, recb;
		
	//IN�CIO
	printf("Escreva o n�mero: ");
	scanf("%d", &num);
		
	funcCalc(num);
}

int procdEnum2()								//Procedimento Enumciadoo 2
{
	//VARI�VEIS
	int num, expo;
	
	//IN�CIO
	printf("Escreva o n�mero: ");
	scanf("%d", &num);
	printf("Escreva o expoente: ");
	scanf("%d", &expo);
	
	funcExpo(num, expo);
}

int procdEnum3()								//Procedimento Enumciadoo 3
{
	procdMenu();
	printf("Fim.");
	return 0;	
}

int procdEnum4()								//Procedimento Enumciadoo 4
{
	//VARI�VEIS
	float	x, y, z;
	int		val;
	
	//IN�CIO
	printf("X: ");
	scanf("%f", &x);
	printf("Y: ");
	scanf("%f", &y);
	printf("Z: ");
	scanf("%f", &z);
		
	val = funColi(x, y, z);
		
	procdRes(val);
}

int procdEnum5()								//Procedimento Enumciadoo 5
{
	//VARI�VEIS
	int 	op, decid;
	
	//IN�CIO
	do												//Menu
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
			
			//case 6: printf("%d", funcTest(op)); break;
			
			default:
				printf("Valor n�o registrado!\n");
				printf("+---------------+\n");
		}
	}while (op !=5);
	
	printf("+---------------+\n");
	printf("Fim do programa.");
}

int main()										//Main
{
	//VARI�VEIS
	int		num;
	
	//IN�CIO
	printf("Escolha o enunciado: ");
	scanf("%d", &num);
	
	switch (num)
	{
		case 1:
			procdEnum1();
		break;
		
		case 2:
			procdEnum2();
		break;

		case 3:
			procdEnum3();
		break;
		
		case 4:
			procdEnum4();
		break;
		
		case 5:
			procdEnum5();
		break;
		
		default:
			printf("Enunciado n�o registrado!");
	}
	return 0;	
}
