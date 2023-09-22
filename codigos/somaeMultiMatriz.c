#include <stdio.h>

#define tam1 3
#define tam2 2


int main(){
    int matriz1[tam1][tam1], matriz2[tam1][tam1], matriz3[tam1][tam2];
    int resultadoSoma[tam1][tam1], resultadoMulti[tam1][tam2];
    int i,j,k;

//leitura das matrizes
    for(i=0;i<tam1;i++){
        for(j=0;j<tam1;j++){
            scanf("%d", &matriz1[i][j]);
        }
    }

    for(i=0;i<tam1;i++){
        for(j=0;j<tam1;j++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            scanf("%d", &matriz3[i][j]);
        }
    }


//soma da matriz1 com matriz2
    for(i=0;i<tam1;i++){
        for(j=0;j<tam1;j++){
            resultadoSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

//multiplicação da matriz 2 com 3
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            resultadoMulti[i][j]=0;
            for(k=0;k<tam1;k++){
                resultadoMulti[i][j] += matriz2[i][k]*matriz3[k][j];
            }
        }
    }

    printf("soma das matrizes 1 e 2:\n");
    for(i=0;i<tam1;i++){
        for(j=0;j<tam1;j++){
            printf("%d ", resultadoSoma[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplicacao das matrizes 2 e 3: \n");
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            printf("%d ", resultadoMulti[i][j]);
        }
        printf("\n");
    }


    return 0;
}