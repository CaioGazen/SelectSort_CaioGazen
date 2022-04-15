#include "OrderSearch.h"

int main(void){
    char nomes[50][50] = {};
    char nome[50];
    int select;
    int Vfull = 0;
    int b;

    for(int nn = 0;nn >= 0; nn++){
        system("cls");
        printf("1 - Inserir Nome \n2 - Ordenar Nomes \n3 - Pesquisar Nome \n4 - Listar Nomes \n5 - Encerrar Programa\n\nEscolha um: ");
        scanf(" %d", &select);
        switch(select){
            case 1:
                if(Vfull >= 50){
                    printf("A lista esta cheia\n");
                    system("pause");
                    break;
                }
                printf("Insira um nome: ");
                scanf(" %s", &nome);
                b = BuscaBinaria(nomes, Vfull, nome);
                if (b >= 0){
                    printf("esse nome ja consta na lista, na posicao %d\n", b);
                    system("pause");
                    break;
                }
                strcpy(nomes[nn],nome);
                printf("%s\n",nomes[Vfull]);
                Vfull++;
            break;
            case 2:
                selectsort(nomes, Vfull);
                printf("nomes ordenados\n");
                system("pause");
            break;
            case 3:
                printf("Insira um nome: ");
                scanf(" %s", &nome);
                b = BuscaBinaria(nomes, Vfull, nome);
                if(b >= 0){
                    printf("O nome esta na posicao %d da lista.\n",b);
                    system("pause");
                    break;
                }
                printf("O nome nao consta na lista.\n");
                system("pause");
            break;
            case 4:
                if(Vfull < 1 ){
                    printf("A lista esta vazia.\n");
                    system("pause");
                    break;
                }
                for(int i=0; i < Vfull;i++){
                    printf("P%d = %s\n",i,nomes[i]);
                }
                system("pause");
            break;
            case 5:
                nn = -2;
            break;
        }
    }
}