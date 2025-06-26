#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

#define mutacao 0.05


int main(){
    double x[10] = {0}, y[10] = {0}, maiorindividuo = 0.000, maiory = 0.0;
    int i, j = 1, geracao = 0;

    srand(time(NULL));
    for(i = 0; i < 10; i++){
    x[i] = (double)(rand() % RAND_MAX);

    printf("Individuo %d eh: %lf\n", i+1, x[i]);
    }

    Sleep(2000);

    printf("Agora, vamos pegar esses 10 individuos, ver qual deles tem maior nota, e fazer ele 'transar' com os outros individuos.\n");
    Sleep(5000);
    printf("Pegaremos os melhores individuos entre os filhos e transaremos eles uns com os outros, tambem.\n");
    Sleep(5000);
    printf("Repetiremos isso por 500 geracoes e vamos ver se a inteligencia artificial vai encontrar a maior nota, que eh 13.\n");
    Sleep(5000);
    printf("A fim de confundir ela, eu tambem coloquei uma nota que parece a maior, mas nao eh.\n");
    Sleep(5000);
    printf("Caso ela encontre 10, ela foi confundida com sucesso.\n");

    Sleep(7000);
    printf("3...\n");
    Sleep(1000);
    printf("2...\n");
    Sleep(1000);
    printf("1...\n");
    Sleep(1000);

    while(geracao != 100){
    
    geracao += 1;

    for(i = 0; i < 10; i++){
        if(x[i] <= 10.0){
            y[i] = x[i];
            }
        else if(x[i] > 10.0 && x[i] <= 20.0){
            y[i] = 20.0 - x[i];
            }
        else if(x[i] > 110.0 && x[i] <= 120.0){
            y[i] = x[i] - 107.0;
            }
        else if(x[i] > 120.0 || (x[i] <= 110 && x[i] > 20)){
            y[i] = 0.0;
            }
        if(y[i] > maiory){
            maiory = y[i];
            maiorindividuo = x[i];
            }
        printf("O individuo %d tem valor %.5lf e nota %.5lf\n", i+1, x[i], y[i]);
        }

    printf("\n");

    printf("O maior individuo da geracao %d eh %.5lf e a nota dele eh %.5lf\n\n", geracao, maiorindividuo, maiory);

    for(i = 0; i < 10; i++){
        x[i] = (x[i]+maiorindividuo)/2;
        x[i] = j*mutacao + x[i];
        j *= -1;
        }
    }

    Sleep(10000);


    return 0;
}