#include<stdio.h>

int main () {

	/*
	* Gesucht ist der ggT, der über zwei Eingaben ermittelt wird
	*/

	printf("\n *********************** ");
	printf("\n *   ^,,,,^   *        * ");
	printf("\n *  ( o x o)  * Euklid * ");
	printf("\n *  ( 7   7)  *        * ");
	printf("\n *   ´´´´´´   *©S.Buch * ");
	printf("\n *********************** \n\n");
	
	// Einlesen von X und Y
	int x,y; 

	printf("\nBitte gibt einen Wert für x ein: ");
	scanf("%d",&x);
	printf("\nBitte gibt einen Wert für y ein: ");
	scanf("%d",&y);
	while(x!=y) {
		if (x>y) {
			x-=y;
		} else {
			y-=x;	
		}
	}
	printf("\nDer gesuchte ggT ist %d",x);

	//Ende
	printf("\n\n");
	return 0;
}
