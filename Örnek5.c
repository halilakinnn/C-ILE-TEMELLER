#include<stdio.h>

int main() {
      float ilkSayi, ikinciSayi, temp;
      
      printf("Sayi 1: ");
      scanf("%f", &ilkSayi);
      
      printf("Sayi 2: ");
      scanf("%f", &ikinciSayi);
 
      temp = ilkSayi;
 
      ilkSayi = ikinciSayi;
 
      ikinciSayi = temp;
 
      printf("\nDegisiklikten sonra ilkSayi = %.2f\n", ilkSayi);
      printf("Degisiklikten sonra ikinciSayi = %.2f", ikinciSayi);
      return 0;
}
