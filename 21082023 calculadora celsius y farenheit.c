#include <stdio.h>
#include <locale.h>

 int main ()
{
	setlocale (LC_ALL, "");
	
	float celsius, farenheit;
	float respuesta1;
	float respuesta2;
	float temperaturaFarenheit;
	float temperaturaCelsius;
	
	printf ("¿Deseas convertir una temperatura de grados centigrados a Farenheit\n"
	"\tsí = 1 \t\t no = 2\n");
	scanf ("%f", &respuesta1);
	
	if (respuesta1 == 1)
	{
	printf("Calculadora de grados Centigrados a Farenheit \n");
	printf ("Ingresa la temperatura que deseas convertir. NOTA:Ingresa el numero sin simbologia.\n");
	scanf ("%f", &celsius);
	temperaturaFarenheit = 1.8*celsius + 32;
	printf ("%f °F\n", temperaturaFarenheit);
	}
	else (respuesta1 == 2);
	{
	printf ("¿Deseas convertir una temperatura de grados Farenheit a centigrados\n"
	"\tsí = 1 \t\t no= 2\n");
	}
	scanf ("%f", &respuesta2);
	if (respuesta2 == 1)
	{
	printf ("Calculadora de grados Farenheit\n");
	printf ("Ingresa la temperatura que deseas convertir NOTA:Ingresa el numero sin simbologia.\n");
	scanf ("%f", &farenheit);
	temperaturaCelsius = (farenheit - 32)/1.8;
	printf ("%f °C", temperaturaCelsius);
	}
	else (respuesta2 == 2);
	{
	printf ("\nEso es todo lo que puedo hacer por ti:)");
	}
	
	

	
	return 0;
	
}
