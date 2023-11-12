#include <stdio.h>

int main() {
	
    float a, b, sonuc;
    
    printf("Sayý 1: ");
    scanf("%f", &a);
    
    printf("Sayý 2: ");
    scanf("%f", &b);  
 
    sonuc = a * b;
 
    printf("Sonuc = %.2f", sonuc);
    
    return 0;
}
