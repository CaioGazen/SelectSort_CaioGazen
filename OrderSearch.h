#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

char* selectsort(char l[][50], int n){

    int M = 0;
    for(int i=0; i < n ; i++){
        for(int j=1; j < n-i; j++) {
            if (strcmp(l[j],l[M]) > 0){
                M = j;
            }
        }
        char temp[50];
        strcpy(temp,l[n-1-i]);
        strcpy(l[n-1-i],l[M]);
        strcpy(l[M],temp);
        M = 0;
    }
    return *l;
}

int BuscaBinaria(char l[][50], int n, char nome[50]){
    for (int i=0; i < n;i++){
        if(strcmp(l[i],nome) == 0){
            return i;
        }
    }
    return -1;
}