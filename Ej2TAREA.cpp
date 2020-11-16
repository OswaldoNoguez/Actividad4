#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int x;
	printf ("Ingresa un número\n");
	scanf ("%d",&x);
	if (x%2==0)
		printf ("El número es par");
return 0;
}
