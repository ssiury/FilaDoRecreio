#include <stdio.h>

void ordenaDecrescente(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void mostrarVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void receber(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d",&vetor[i]);
    }
}

void clona(int vetor[], int clone[], int tam){
    for(int i=0;i<tam;i++){
        clone[i] = vetor[i];
    }
}

int contIguais(int vetor1[], int vetor2[], int tam){
    int cont = 0;
    for(int i=0;i<tam;i++){
        if(vetor1[i]==vetor2[i]){
            cont++;
        }
    }
    return cont;
}

int main(){
    int qtd_casos;
    scanf("%d",&qtd_casos);

    int vetor_casos[qtd_casos];
    int vetor_cont[qtd_casos];

    for(int i=0; i<qtd_casos; i++){

        vetor_cont[i]=0;

        int qtd_notas;
        scanf("%d",&qtd_notas);

        int vetor_notas[qtd_notas];

        receber(vetor_notas,qtd_notas);

        int vetor_comparacao[qtd_notas];
        clona(vetor_notas,vetor_comparacao, qtd_notas);

        ordenaDecrescente(vetor_notas,qtd_notas);

        vetor_cont[i] = contIguais(vetor_notas,vetor_comparacao,qtd_notas);

    }
    for(int i=0;i<qtd_casos;i++){
        printf("%d\n", vetor_cont[i]);
    }
}
