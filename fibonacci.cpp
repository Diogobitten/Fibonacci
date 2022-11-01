#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

main () {
	
	int i=0, n1=34, n2=55, proximo;
	
	printf ("%d",n1);
	printf (",""%d",n2);

	for (i=2; i<=15; i++){
		
	proximo = n1 + n2;
	printf (",""%d", proximo);
		
	n1 = n2;
	n2 = n1 + proximo;
	
	}
	
	return 0;
}
