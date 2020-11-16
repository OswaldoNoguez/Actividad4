#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int x;
	printf ("Ingresa un número\n");
	scanf ("%d",&x);
	(x%2==0)?printf ("El número es par"):printf("El número es impar");
return 0;
}
