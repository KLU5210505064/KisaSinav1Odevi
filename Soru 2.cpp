 #include <stdio.h>
#include <stdlib.h>


 
 int main()
{
	int i;
    int eleman,enkucuk;
    int toplam = 0;
     
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&eleman);
     
    int dizi[eleman];
     
    for( i = 0; i < eleman; i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        if(i == 0){
            enkucuk = dizi[i];
            
        if(dizi[i] < enkucuk){
            enkucuk = dizi[i];
        }
      }
  }
      
    printf("\n\nDizinin en kucuk degeri = %d\n",enkucuk);
    
    return 0;
}
