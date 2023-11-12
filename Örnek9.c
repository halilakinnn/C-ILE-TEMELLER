#include <stdio.h>

int main() {
	
    double num;
    
    printf("Sayý: ");
    scanf("%lf", &num);
    
    if (num <= 0.0) {
        if (num == 0.0)
            printf("0 girdiniz..");
        else
            printf("Negatif sayý girdiniz..");
    } else
        printf("Pozitif sayý girdiniz..");
    return 0;
}
