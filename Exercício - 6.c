#include <stdio.h>
int main(){

    int sexo;
    float altura, pesoideal;

    printf("Digite a altura em metros: ");

    scanf("%f", &altura);

    printf("Digite o sexo (feminino (1) masculino(2): ");

    scanf("%d", &sexo);

    if(sexo == 1){
        pesoideal= (62.1 * altura) - 44.7;
    }else{
    pesoideal= (72.7 * altura) - 58;
    }
    printf("Peso ideal: %.2fkg\n", pesoideal);

    return 0;
}
