#include <stdio.h>

int fattoriale(int);

int main(){
    int base = 0;
    int prodotto = 0;
    printf("Quale numero vuoi sapere il fattoriale?\n");
    scanf("%d", &base);
    prodotto = fattoriale(base);
    
    printf("%d", prodotto);
}

int fattoriale(int n){
    int fat;
    if (n == 0)
        return 1; 
    else 
    {   fat = n * fattoriale(n - 1);
        return fat;
    }
}
