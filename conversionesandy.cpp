#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

int main (int argc,char **argv)
{
	system("color f9");
	setlocale(LC_ALL, "");

	printf("CONVERSIÓN DE TEMPERATURAS \n");
	printf("\n");
	float celsius= 18;
	float farenheit = 81;
	float temperaturaFarenheit ;
	float temperaturaCelsius ;
		
	temperaturaFarenheit= (9/5.0)*celsius +32;
	temperaturaCelsius= (farenheit-32.0)*(5.0/9.0);
	printf ("Mostrar temperaturaFarenheit: %f°F\n",temperaturaFarenheit);
	printf ("Mostrar temperaturaCelsius:%f°C\n",temperaturaCelsius);
	

	
	return 0;
}


