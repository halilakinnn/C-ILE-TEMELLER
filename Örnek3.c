#include <stdio.h>

int main() {
	
    float a, b, sonuc;
    
    printf("Say� 1: ");
    scanf("%f", &a);
    
    printf("Say� 2: ");
    scanf("%f", &b);  
 
    sonuc = a * b;
 
    printf("Sonuc = %.2f", sonuc);
    
    return 0;
}
