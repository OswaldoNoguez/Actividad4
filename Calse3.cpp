#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int x;
	printf ("Ingresa un n�mero\n");
	scanf ("%d",&x);
	(x%2==0)?printf ("El n�mero es par"):printf("El n�mero es impar");
return 0;
}
