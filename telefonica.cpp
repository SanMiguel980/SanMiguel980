
#include <iostream>

/*  Telefonica  */

int main(int argc, char** argv) 

{
	

	int Opc, OpcT, OpcM, OpcAT, OpcW, OpcA ; 
	
	printf(" Empresas Telefonicas \n ");
	printf("1. Telcel \n ");
	printf("2. Movistar \n ");
	printf("3. AT&T \n ");
	printf("4. Wizz \n ");
	printf("5. Axtel \n ");
	printf( "Selecciona una Opcion " );
	scanf("%d", &Opc );
	if (Opc == 1)
	{
	printf("\n");
	printf(" Bienvenido a Telcel \n ");
	printf("1. $500 Pesos de Saldo \n ");
	printf("2. $400 Pesos de Saldo \n ");
	printf("3. $300 Pesos de Saldo \n ");
	printf("4. $200 Pesos de Saldo \n ");
	printf("5. $100 Pesos de Saldo \n ");
	printf("6. $50 Pesos de Saldo \n ");
	printf( "Selecciona una Opcion ");
	scanf("%d", & OpcT);
	if (OpcT == 1)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $500 Pesos \n");
	printf( "Gracias por su Recarga" );
	}
	else 
	{
	if (OpcT == 2)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $400 Pesos \n ");
	printf( "Gracias por su Recarga" );
	}
	else 
	{
	if (OpcT == 3)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $300 Pesos \n ");
	printf( "Gracias por su Recarga" );
	}
	else 
	{
	if (OpcT == 4) 
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $200 Pesos \n ");
	printf( "Gracias por su Recarga" );
	}
	else 
	{
	if (OpcT == 5)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $100 Pesos \n ");
	printf( "Gracias por su Recarga" );
	}
	else 
	{
	if (OpcT == 6) 
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $50 Pesos \n ");
	printf( "Gracias por su Recarga" );
	}
	else 
	{
	if (OpcT <= 0)
	{
	printf("\n");
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (OpcT > 6)
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
	else 
	{
	if (Opc == 2)
	{
	printf("\n");
	printf(" Bienvenido a Movistar \n ");
	printf("1. $500 Pesos de Saldo \n ");
	printf("2. $400 Pesos de Saldo \n ");
	printf("3. $300 Pesos de Saldo \n ");
	printf("4. $200 Pesos de Saldo \n ");
	printf("5. $100 Pesos de Saldo \n ");
	printf("6. $50 Pesos de Saldo  \n ");
	printf("Selecciona una Opcion ");
	scanf("%d", &OpcM);
	if (OpcM == 1)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $500 Pesos \n ");
	printf( "Gracias por tu Recarga a Movistar" );
	}
	else
	{
	if (OpcM == 2)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $400 Pesos \n");
	printf( "Gracias por tu Recarga a Movistar" );
	}
	else 
	{
	if (OpcM == 3)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $300 Pesos \n ");
	printf( "Gracias por tu Recarga a Movistar" );
	}
	else 
	{
	if (OpcM == 4)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $200 Pesos \n ");
	printf( "Gracias por tu Recarga a Movistar" );
	}
	else
	{
	if (OpcM == 5)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $100 Pesos \n ");
	printf( "Gracias por tu Recarga a Movistar" );
	}
	else 
	{
	if (OpcM == 6)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $50 Pesos \n ");
	printf( "Gracias por tu Recarga a Movistar" );
	}
	else 
	{
	if (OpcM <= 0)
	{
	printf("\n");
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (OpcM > 6)
	{
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
	else 
	{
	if (Opc == 3)
	{
	printf("\n");
	printf(" Bienvenido a AT&T \n ");
	printf("1. $500 Pesos de Saldo \n ");
	printf("2. $400 Pesos de Saldo \n "); 
	printf("3. $300 Pesos de Saldo \n ");
	printf("4. $200 Pesos de Saldo \n ");
	printf("5. $100 Pesos de Saldo \n ");
	printf("6. $50 Pesos de Saldo \n ");
	printf("Selecciona una de las Opciones ");
	scanf("%d", & OpcAT);
	if (OpcAT == 1)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $500 Pesos \n ");
	printf( "Gracias por tu Recarga a AT&T" );
	}
	else 
	{
	if (OpcAT == 2) 
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $400 Pesos \n ");
	printf( "Gracias por tu Recarga a AT&T" ); 
	}
	else 
	{
	if (OpcAT == 3) 
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $300 Pesos \n ");
	printf( "Gracias por tu Recarga a AT&T ");
	}
	else 
	{
	if (OpcAT == 4)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $200 Pesos \n ");
	printf( "Gracias por tu Recarga AT&T" );
	}
	else 
	{
	if (OpcAT == 5)	
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $100 Pesos \n ");
	printf( "Gracias por tu Recarga a AT&T" ); 
	}
	else 
	{
	if (OpcAT == 6)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $50 Pesos \n ");
	printf( "Gracias por tu Recarga a AT&T" );
	}
	else 
	{
	if (OpcAT <= 0)
	{
	printf("\n"); 
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (OpcAT > 6)
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
	else 
	{
	if (Opc == 4)
	{
	printf("\n"); 
	printf(" Bienvenido a Wizz \n ");
	printf("1. $500 Pesos de Saldo \n ");
	printf("2. $400 Pesos de Saldo \n ");
	printf("3. $300 Pesos de Saldo \n ");
	printf("4. $200 Pesos de Saldo \n ");
	printf("5. $100 Pesos de Saldo \n ");
	printf("6. $50 Pesos de Saldo \n ");
	printf("Selecciona una de las Opciones ");
	scanf("%d", &OpcW);
	if (OpcW == 1)
	{
	printf("\n");
	printf(" Has Hecho una Recarda de $500 Pesos \n ");
	printf( "Gracias por Su Recarga a Wizz" ); 
	}
	else 
	{
	if (OpcW == 2)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $400 Pesos \n ");
	printf( "Gracias por su Recarga a Wizz" );
	}
	else 
	{
	if (OpcW == 3)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $300 Pesos \n ");
	printf( "Gracias por su Recarga a Wizz" );
	}
	else 
	{
	if (OpcW == 4)
	{
	printf(" Has Hecho una Recarga de $200 Pesos \n ");
	printf( "Gracias por su Recarga a Wizz" );
	}
	else 
	{
	if (OpcW == 5)
	{
	printf("\n"); 
	printf(" Has Hecho una Recarga de $100 Pesos \n ");
	printf( "Gracias por su Recarga a Wizz" );
	}
	else 
	{
	if (OpcW == 6)
	{
	printf("\n");
	printf(" Has Hecho una Recarda de $50 Pesos \n ");
	printf( "Gracias por su Recarga a Wizz" );
	}
	else 
	{
	if (OpcW <= 0)
	{
	printf("\n");
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (OpcW > 6)
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
	else 
	{
	if (Opc == 5)
	{
	printf("\n");
	printf(" Bienvenido a Axtel \n ");
	printf("1. 500 Pesos de Saldo \n ");
	printf("2. 400 Pesos de Saldo \n ");
	printf("3. 300 Pesos de Saldo \n ");
	printf("4. 200 Pesos de Saldo \n ");
	printf("5. 100 Pesos de Saldo \n ");
	printf("6. 50 Pesos de Saldo \n ");
	printf("Selecciona una Opcion ");
	scanf("%d", & OpcA );
	if (OpcA == 1)
	{
	printf("\n"); 
	printf(" Has Hecho una Recarga de $500 Pesos \n ");
	printf( "Gracias por su Recarga a Axtel" );
	}
	else 
	{
	if (OpcA == 2)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $400 Pesos \n ");
	printf( "Gracias por su Recarga a Axtel" );
	}
	else 
	{
	if (OpcA == 3)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $300 Pesos \n ");
	printf( "Gracias por su Recarga a Axtel" );
	}
	else 
	{
	if (OpcA == 4)
	{
	printf("\n"); 
	printf(" Has Hecho una Recarga de $200 Pesos \n ");
	printf( "Gracias por su Recarga a Axtel" );
	}
	else 
	{
	if (OpcA == 5)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $100 Pesos \n ");
	printf( "Gracias por su Recarga a Axtel" );
	}
	else 
	{
	if (OpcA == 6)
	{
	printf("\n");
	printf(" Has Hecho una Recarga de $50 Pesos \n ");
	printf( "Gracias por su Recarga a Axtel" );
	}
	else 
	{
	if (OpcA <= 0)
	{
	printf("\n");
	printf(" Error, Opcion no Valida ");
	}
	else 
	{
	if (OpcA > 6)
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
	else 
	{
	if (Opc <= 0)
	{
	printf("\n");
	printf("Error, Opcion no Valida ");
	}else 
	{
	if (Opc >= 6)
	{
	printf("\n");
	printf( " Error, Opcion no Valida " );
	}
	}
	}
	}
	}
	}
	}
	printf("\n");
	printf( " El programa ha Finalizado " );
	
	
	
	
	
	return 0;
} 
