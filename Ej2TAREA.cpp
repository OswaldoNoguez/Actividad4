#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int x;
	printf ("Ingresa un n�mero\n");
	scanf ("%d",&x);
	if (x%2==0)
		printf ("El n�mero es par");
return 0;
}
