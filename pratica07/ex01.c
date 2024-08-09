#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int LancaMoeda(){
    return rand()%2;
}

int main()
{
    int sorteio;
    int contCara=0;
    int contCoroa=0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++){
        sorteio = LancaMoeda();
        if (sorteio == 0)
        {
            contCara++;
        }else{
            contCoroa++;
        }
        

        printf("%d",sorteio);
    }
    printf("\ncara:%d,coroa:%d",contCara,contCoroa);
    return 0;
}
