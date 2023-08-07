#include <stdio.h>
#include <math.h>

int main () {
	char ch; 
	int x, a, b;
	float o, z;
		
	do { 
	
	printf ("BEM VINDO!!!\n\n");
	printf("Digite um valor para a: ");
	scanf("%d", &a);
	printf ("Digite um valor para b: ");
	scanf ("%d", &b);
	
	o = atan(b/a);
	z = sqrt(a*a + b*b);
	
	printf(" Valor de O: %f ", o);
	printf("\n Valor de Z: %.3f ", z);
		
	printf ("Quer tentar de novo?");
	printf ("\n S - Sim");
	printf ("\n N - Nao\n ");
	scanf (" %c", &ch);

	system ("cls");
	} while (ch == 's');
}
