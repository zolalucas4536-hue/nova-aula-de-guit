#include <stdio.h>
#include <string.h>

int main(){

    char trabalhador[30];
    float salario = 0.0;
    int hora_trabalho;
    int hora_extras;
    float salario_bonus = 0.0; 
    float bonus = 0.0;

    printf("Digite o nome do trabalho:");
    scanf("%s", trabalhador);

    printf("\nDigite o salario do trabalhador:");
    scanf("%f", &salario);

    printf("\nDigite as horas trabalhadas nesse semana:");
    scanf("%d", &hora_trabalho);


    if(hora_trabalho == 40){
        printf("\n Voce teve %d horas de  trabalho.", hora_trabalho);
        printf("\n salario é de %.3f\n", salario);
    }

    else if (hora_trabalho == 50 ){
        salario_bonus = 1.5 * salario;
        bonus = salario_bonus - salario;

        printf("\nO teu salario normal é de: %.3f", salario);
        printf("\nVoce teve um bonus de: %.3f no teu salario", bonus);
        printf("\n O teu salario bonus das horas extras é: %.3f\n", salario_bonus);
    }

    else if (hora_trabalho > 50){
        
        salario_bonus = 2 * salario;
        bonus = salario_bonus - salario;

        printf("\n O teu salario normal é de: %.3f", salario);
        printf("\nVoce teve um bonus de: %.3f no teu salario", bonus);
        printf("\n O teu salario bonus das horas extras é de: %.3f \n", salario_bonus);
    }
    
    


}