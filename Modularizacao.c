#include <stdio.h> //bibliotéca padrão
#include <math.h>  //bibliotéca para operações matemáticas
int procdEnum1()
{
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

	//VARIÁVEIS
	int num, recb;
		
	//INÍCIO
	printf("Escreva o número: ");
	scanf("%d", &num);
		
	funcCalc(num);
		
	return 0;	
	
}

int procdEnum2()
{
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

int procdEnum3()
{
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

	procdMenu();
	printf("Fim.");
	return 0;	
}

int procdEnum4()
{
	float funColi (float x, float y, float z)		//Função da colisão
	{
		//VARIÁVEIS
		float		d = 0;
		
		//INÍCIO
		d = sqrt((pow(((x*2)-(x*1)), 2))+(pow(((y*2)-(y*1)), 2))+(pow(((z*2)-(z*1)), 2)));
		return d;
	}

	int procdRes(int val)								//Procedimento de colisão
	{
		if(val != 0)
		{
			printf("Objeto não colidiu!");
		}
		else
		{
			printf("Objeto colidiu!");
		}
	}

	//VARIÁVEIS
	float	x, y, z;
	int		val;
	
	//INÍCIO
	printf("X: ");
	scanf("%f", &x);
	printf("Y: ");
	scanf("%f", &y);
	printf("Z: ");
	scanf("%f", &z);
		
	val = funColi(x, y, z);
		
	procdRes(val);
}

int procdEnum5()
{
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

int funcEx1 (int a, int b, int c)				//Função ex1
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
			
			//case 6: printf("%d", funcTest(op)); break;
			
			default:
				printf("Valor não registrado!\n");
				printf("+---------------+\n");
		}
	}while (op !=5);
	
	printf("+---------------+\n");
	printf("Fim do programa.");
}

int main()
{
	//VARIÁVEIS
	int		num;
	
	//INÍCIO
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
			printf("Enunciado não registrado!");
	}
	return 0;	
}
