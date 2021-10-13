#include <iostream>

/* Cuadrado */

int main(int argc, char** argv) 
{
	float L, A ; 
	
	printf(" Area del Cuadrado \n ");
	printf("Teclea uno de los lados del cuadrado ");
	scanf("%f", &L); 
	if (L > 0)
	{
	A = L * L; 
	printf(" El area del cuadrado es %.1f", A);
	}
	else 
	{
	printf(" Las areas negativas no estan definidas ");
	}
	return 0;
}
