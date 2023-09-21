#include <stdio.h>
int main(){
    int fotos, entrada;
    int tubaroes[15]={0};
    int i, diferentes=0;

    scanf("%d", &fotos);
    for(i=0;i<fotos;i++){
        scanf("%d", &entrada);
            if(tubaroes[entrada]==0){
                tubaroes[entrada]=1;
                diferentes++;
            }

    }
    printf("%d espécies diferentes!\n",diferentes);
    for(i=1;i<15;i++){
        if (tubaroes[i] !=0){
            switch(i){
                case 1: printf("tubarao branco\n"); break;
                case 2: printf("tubarao martelo\n"); break;
                case 3: printf("tubarao touro\n"); break;
                case 4: printf("tubarao baleia\n"); break;
                case 5: printf("tubarao lixa\n"); break;
                case 6: printf("tubarao frade\n"); break;
                case 7: printf("tubarao tigre\n"); break;
                case 8: printf("tubarao cabeça-chata\n"); break;
                case 9: printf("tubarao serra\n"); break;
                case 10: printf("tubarao pontas negras\n"); break;
                case 11: printf("tubarao raposa\n"); break;
                case 12: printf("tubarao mako\n"); break;
                case 13: printf("tubarao bruxa\n"); break;
                case 14: printf("tubarao azul\n"); break;
            }
        }
    }
    return 0;
}