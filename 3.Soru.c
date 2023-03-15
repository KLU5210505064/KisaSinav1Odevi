#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int D[], int N, int sayi) {
	
	int i =0;  
	while (i<N){     // n kez çalýþacaktýr
		if(D[i]== sayi) break;   // 1 kez çalýþacaktýr
		i++;   
		
	}
	if(i<N) return i;  // 1 kez çalýþacaktýr
	else return -1;  // n-1 kez çalýþýr 
	
	return 0; // 1 kez calisacaktir.
}
//Binary Search aramasýdýr.
//Çalýþma zamaný direkt N baðlýdýr. Bu yüzden Linear zamanlýdýr.
 // Çalýþma Zamaný: T(n)= 2n+ 4=>  O(N)

