#include <stdio.h>

int main() {
	
    char c;
    int sesliKucukHarf, sesliBuyukHarf;
    
    printf("Bir karakter girin: ");
    scanf("%c", &c);
 
    sesliKucukHarf = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 
    sesliBuyukHarf = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 
    if (sesliKucukHarf || sesliBuyukHarf)
        printf("%c unlu harf.", c);
    else
        printf("%c unsuz harf.", c);
    return 0;
}
