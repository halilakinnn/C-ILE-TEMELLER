#include <stdio.h>

int main() {
	
    double n1, n2, n3;
    
    printf("Say�1: ");
    scanf("%lf", &n1);
    
    printf("Say�2: ");
    scanf("%lf", &n2);
    
    printf("Say�3: ");
    scanf("%lf", &n3);
 
    if (n1 >= n2 && n1 >= n3)
        printf("Girilen En B�y�k Say� : %.2lf.", n1);
 
    else if (n2 >= n1 && n2 >= n3)
        printf("Girilen En B�y�k Say� : %.2lf.", n2);
 
    else
        printf("Girilen En B�y�k Say� : %.2lf.", n3);
 
    return 0;
}
