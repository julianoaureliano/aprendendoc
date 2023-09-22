//esse codigo vai receber 10 valores em um vetor e ordena-los de forma crescente
#include <stdio.h>

//função que ordena o vetor recebe o tamanho e o vetor em si
void ordena_vetor(int tam, int* vet){
    int aux[tam];
    int i,j, menor, maior, menor_pos,pos=0;
    maior=vet[0];
    menor_pos =0;
    for(i=0;i<tam;i++){
        menor=maior;
            for(j=0;j<tam;j++){
                if(vet[j]<menor){
                   menor=vet[j];
                    menor_pos=j;
                }else if(vet[j]>maior){
                    maior = vet[j];                    
                }
            }
       aux[pos]=menor;
       pos++;
       vet[menor_pos]=maior+1;     
    }
    for(i=0;i<tam;i++){
       vet[i]=aux[i]; 
    }
}


int main(){
    int vetor[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }

    ordena_vetor(10, vetor);

    for(i=0;i<10;i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");



    return 0;
}