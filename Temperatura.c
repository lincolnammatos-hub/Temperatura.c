#include <stdio.h>

int main() {

    float temperatura, umidade;
    unsigned int estoque;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura >= 30.0){
        printf("A temperatura esta acima de 30 graus \n");
    } else {
        printf("A temperatura esta abaixo de 30 graus \n");
    }
    if(umidade >= 70.0) {
        printf("A umidade esta acima de 70 por cento \n");
    } else { 
        printf("A umidade esta abaixo de 70 por cento \n");
    }
    if(estoque < 10) {
        printf("O estoque esta baixo \n");
    } else {
        printf("O estoque esta normal \n");
    }

    return 0;
}
