#include <stdio.h>

int main(){
int a;
printf("digite 0 sair 1, digite 1 sai 0 : ");
scanf("%d",&a);
a= a-(a^(-1));
printf("%d",a);

return 0;
}