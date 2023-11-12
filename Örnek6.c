#include <stdio.h>

int main() {
	
    int num;
    
    printf("Sayi Giriniz: ");
    scanf("%d", &num);
 
    if(num % 2 == 0)
        printf("%d Cift.", num);
    else
        printf("%d Tek.", num);
    
    return 0;
}
