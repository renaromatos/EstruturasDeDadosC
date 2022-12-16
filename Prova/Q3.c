#include <stdio.h>
#include <stdlib.h>

void converte(int n){
    if(n > 0){
        converte(n / 2);
        printf("%d", n % 2);
    }
    if(n = 0){
        return;
    }
    converte(n / 2);
    printf("%d", n % 2);   
}

int main(){

    converte(00110100);

}