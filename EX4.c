#include <stdio.h>								//bibliotéca padrão
#include <math.h>								//bibliotéca para operações matemáticas

float funColi (float x, float y, float z)		//Função da colisão
{
	//VARIÁVEIS
	float		d = 0;
	
	//INÍCIO
	d = sqrt((pow(((x*2)-(x*1)), 2))+(pow(((y*2)-(y*1)), 2))+(pow(((z*2)-(z*1)), 2)));
	return d;
}

procdRes(int val)								//Procedimento de colisão
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
int main()										//Main
{
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
	
	return 0;	
}
