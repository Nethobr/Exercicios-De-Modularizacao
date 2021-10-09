#include <stdio.h>								//bibliot�ca padr�o
#include <math.h>								//bibliot�ca para opera��es matem�ticas

float funColi (float x, float y, float z)		//Fun��o da colis�o
{
	//VARI�VEIS
	float		d = 0;
	
	//IN�CIO
	d = sqrt((pow(((x*2)-(x*1)), 2))+(pow(((y*2)-(y*1)), 2))+(pow(((z*2)-(z*1)), 2)));
	return d;
}

procdRes(int val)								//Procedimento de colis�o
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
int main()										//Main
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
	
	return 0;	
}
