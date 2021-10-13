#include <iostream>

/* Programa Geometrico */

int main(int argc, char** argv) 
{
	
	int opc; 
	float B, H, R, L, Ra, Pi = 3.1416 , b, D, d, S, s, mL, P, Apo ; 
	
	printf(" Programa Geometrico \n ");
	printf("1. Area de un Cuadrado \n ");
	printf("2. Area de un Triangulo \n ");
	printf("3. Area de un Rectangulo \n ");
	printf("4. Area de un Circulo \n ");
	printf("5. Area de un Paralelogramo \n ");
	printf("6. Area de un Trapecio \n ");
	printf("7. Area de un Rombo \n ");
	printf("8. Area de una Elipse \n ");
	printf("9. Area de un Poligono Regular \n "); 
	printf("Elije una Opcion  ");
	scanf("%d", &opc);
	if (opc == 1)
	{
	printf("\n");
	printf(" Area de un Cuadrado \n ");
	printf("Teclea el lado del Cuadrado ");
	scanf("%f", &L);
	if (L > 0)
	{
	R = L * L ; 
	printf(" El area del Cuadrado es %.1f", R);
	}else 
	{
	printf("\n");
	printf("Error, No puede haber Valores Negativos ni en Cero  ");
	}
	}
	else 
	{
	if (opc == 2)
	{
	printf("\n");
	printf(" Area de un Triangulo \n ");
	printf( "Teclea la Base del Triangulo ");
	scanf("%f", &B);
	if (B > 0)
	{
	printf(" Teclea la Altura del Triangulo ");
	scanf("%f", &H);
	if (H > 0)
	{
	R = B * H / 2 ; 
	printf(" El area del Triangulo es %.1f ", R );
	}
	else
	{
	printf("\n");
	printf(" Error, No puede haber datos Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber datos Negativos ni en Cero ");
	}
	}
	else 
	{
	if (opc == 3)
	{
	printf("\n");
	printf(" Area de un Rectangulo \n ");
	printf("Teclea la Base del Rectangulo ");
	scanf ("%f", &B);
	if (B > 0)
	{
	printf(" Teclea la Altura del Rectangulo ");
	scanf("%f", &H);
	if (H > 0)
	{
	R = B * H ; 
	printf(" El area del Rectangulo es %.1f ", R);
	}
	else
	{
	printf("\n");
	printf(" Error, No puede haber datos Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	if (opc == 4)
	{
	printf("\n");
	printf(" Area de un Circulo \n ");
	printf( "Teclea el Radio del Circulo ");
	scanf("%f", &Ra);
	if (Ra > 0)
	{
	R = Ra * Ra * Pi ; 
	printf(" El Area del Circulo es %.1f", R );
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	if (opc == 5)
	{
	printf("\n");
	printf(" Area de un Paralelogramo \n ");
	printf( "Teclea la Base del Paralelogramo ");
	scanf("%f", &B);
	if (B > 0)
	{
	printf(" Teclea la Altura del Paralelogramo ");
	scanf("%f", &H);
	if (H > 0)
	{
	R = B * H ;
	printf(" El Area del Paralelogramo es %.1f", R);
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}else 
	{
	if (opc == 6)
	{
	printf("\n");
	printf(" Area de un Trapecio \n ");
	printf( "Tecle la Base Menor del Trapecio ");
	scanf("%f", &b);
	if (b > 0)
	{
	printf(" Tecle la Base Mayor del Trapecio ");
	scanf("%f", &B);
	if (B > 0)
	{
	if (B > b)
	{
	printf(" Tecle la Altura del Trapecio ");
	scanf("%f", &H);
	if (H > 0)
	{
	R = ((B + b) / 2) * H ; 
	printf(" El area del Trapecio es %.1f ", R);
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, La base Mayor no Puedes ser Mas pequeña ni igual a la Base Menor ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No Puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	if (opc == 7)
	{
	printf("\n");
	printf(" Area de un Rombo \n ");
	printf( "Teclea la Diagonal Menor del Rombo ");
	scanf("%f", &d);
	if (d > 0)
	{
	printf(" Tecle la Diagonal Mayor del Rombo ");
	scanf("%f", &D); 
	if (D > 0)
	{
	if (D > d)
	{
	R = D * d / 2; 
	printf(" El area del Rombo %.1f", R);
	}
	else 
	{
	printf("\n");
	printf(" Error, La diagonal Mayor no puede ser mas pequeña que la Digonal Menor ");
	}
	}
	else
    {
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Datos Negativos ni en Cero ");
	}
	}
	else
	{
	if (opc == 8)
	{
	printf("\n");
	printf(" Area de una Elipse \n ");
	printf( "Teclea el Semieje Menor ");
	scanf("%f", &s);
	if (s > 0)
	{
	printf(" Teclea el Semieje Mayor ");
	scanf("%f", &S);
	if (S > 0)
	{
	if (S > s)
	{
	R = S * s * Pi ; 
	printf(" El area de la Elipse es %.2f ", R);
	}
	else 
	{
	printf("\n");
	printf(" El Semieje Mayor no puede ser Menor ni igual que el Semieje Menor ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Valores Negativos ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Valores Negativos ni en Cero ");
	}
	}
	else 
	{
	if (opc == 9)
	{
	printf("\n");
	printf(" Area de un Poligono Regular \n ");
	printf( "Teclea el Numero de Lados del Poligono ");
	scanf("%f", &L);
	if (L > 0)
	{
	printf(" Teclea la Medida del Lado del Poligono ");
	scanf("%f", &mL);
	if (mL > 0)
	{
	P = L * mL ; 
	printf(" Teclea el Valor de la Apotema ");
	scanf("%f", &Apo);
	if (Apo > 0)
	{
	R = P * Apo / 2; 
	printf(" El Area del poligono Regular es %.1f", R );
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Valores Negatvios ni en Cero ");
	}
	}
	else 
	{
	printf("\n");
	printf(" Error, No puede haber Valores Negativos ni en Cero ");
	}
	}else 
	{
	printf("\n");
	printf(" Error, No puede haber Valores Negativos ni en Cero ");
	}
	}
	else 
	{
	if (opc <= 0)
	{
	printf("\n");
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (opc >= 10)
	{
	printf("\n");
	printf(" Error, Opcion no Valida ");
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	printf("\n");
	printf(" El Programa ha Finalizado ");
	
	
	
	
	
	
	
	
	return 0;
}
