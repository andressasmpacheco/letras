#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // Verifica se o caractere é uma vogal minúscula
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        printf("O caractere é uma vogal.\n");
    }
    // Verifica se o caractere é uma vogal maiúscula
    else if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("O caractere é uma vogal.\n");
    }
    // Verifica se o caractere é uma consoante
    else if ((caractere >= 'b' && caractere <= 'z') || (caractere >= 'B' && caractere <= 'Z')) {
        printf("O caractere é uma consoante.\n");
    }
    // Caso contrário, não é uma letra
    else {
        printf("O caractere não é uma letra.\n");
    }

    return 0;
}
