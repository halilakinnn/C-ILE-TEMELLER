#include <stdio.h>

int main() {
	
    double num;
    
    printf("Say�: ");
    scanf("%lf", &num);
    
    if (num <= 0.0) {
        if (num == 0.0)
            printf("0 girdiniz..");
        else
            printf("Negatif say� girdiniz..");
    } else
        printf("Pozitif say� girdiniz..");
    return 0;
}
