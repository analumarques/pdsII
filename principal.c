#include <stdio.h>
#include "matematica.h"

#define PI 3.14159265358979323846

void main(){
    float angulo; 
    printf("Vamos encontrar o seno, cosseno e tangente de um ângulo!\n");
    printf("Insira o valor em graus do ângulo desejado: ");
    scanf("%f", &angulo);

    float angulo_radianos = ((angulo * PI) / 180);

    float seno = calcular_seno(angulo_radianos);
    float cosseno = calcular_cosseno(angulo_radianos);
    float tangente = calcular_tangente(angulo_radianos);

    if(seno == -0.00){
        seno = (seno * -0.00);
    }

    if(cosseno == -0.00){
        cosseno = (cosseno * -0.00);
    }

    if(tangente == -0.00){
        tangente = (tangente * -0.00);
    }

    if(angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360){
        tangente = -55.5;
    }

    if(tangente == -55.5){
        printf("O angulo desejado foi %.0f. Seu seno e %.2f e seu cosseno e %.2f.\n", angulo, seno, cosseno);
        printf("A tangente desse ângulo não existe.\n");
    } else {
        printf("O angulo desejado foi %.0f. Seu seno e %.2f, seu cosseno e %.2f e sua tangente e %.2f.\n", angulo, seno, cosseno, tangente);
    }
}
