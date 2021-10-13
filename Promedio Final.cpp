#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float Promedio, Cal1, Cal2, Cal3; 
	
	printf(" Promedio Final \n ");
	printf("Teclea la Calificacion del Primer Parcial ");
	scanf("%f", &Cal1);
	if (Cal1 >= 0)
	{
	if (Cal1 <= 10)
	{
	printf(" Teclea la calificaion del Segundo Parcial ");
	scanf("%f", &Cal2);
	if (Cal2 >= 0)
	{
	if (Cal2 <= 10)
	{
	printf(" Teclea la calificacion del Tercer Parcial ");
	scanf("%f", &Cal3);
	if (Cal3 >= 0)
	{
	if (Cal3 <= 10)
	{
	Promedio = (Cal1 + Cal2 + Cal3) / 3 ;
	if (Promedio >= 6)
	{
	printf(" Has aprovado, Tu promedio es de  %.1f ", Promedio);
	printf(" Felicidades !!! ");
	}
	else 
	{
	printf(" Has Reprovado, Tu promedio fue de %.1f ", Promedio);
	printf(" Aplicate !!! ");
	}
	}
	}
	else 
	{
	printf(" Error, No puede haber Calificaciones menores que cero ");
	}
	}
	}
	else 
	{
	printf(" Error, La calificaion no puede ser menor que cero ");
	}
	}
	else 
	{
	printf(" Error, La calificacion no puede ser Mayor a 10 ");
	}
	}
	else
	{
	printf(" Error, la calificacion no puede ser menor a 0 ");
	}
	
	
	

	
	
	
	return 0;
}
