#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int D[], int N, int sayi) {
	
	int i =0;  
	while (i<N){     // n kez �al��acakt�r
		if(D[i]== sayi) break;   // 1 kez �al��acakt�r
		i++;   
		
	}
	if(i<N) return i;  // 1 kez �al��acakt�r
	else return -1;  // n-1 kez �al���r 
	
	return 0; // 1 kez calisacaktir.
}
//Binary Search aramas�d�r.
//�al��ma zaman� direkt N ba�l�d�r. Bu y�zden Linear zamanl�d�r.
 // �al��ma Zaman�: T(n)= 2n+ 4=>  O(N)

