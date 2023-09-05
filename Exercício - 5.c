#include <stdio.h>
int main(){

    float angulo1, angulo2, angulo3;

    printf("Digite os valores dos tres angulos do triangulo\n");

    scanf("%f%f%f",&angulo1, &angulo2, &angulo3);

    if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
        printf("Triangulo Retangulo\n");
    }else if(angulo1 > 90 || angulo2 > 90 || angulo3 > 90){
        printf("Triangulo Obtusangulo\n");
    }else{
        printf("Triangulo Acutangulo\n");
    }

    return 0;

}
