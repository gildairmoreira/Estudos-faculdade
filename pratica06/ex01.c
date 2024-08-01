#include <stdio.h>

typedef struct sHora
{
    int hor,min,seg;
}Hora;


int main()
{
    
    Hora horario;

    printf("Entre com a hora: ");
    scanf("%d", &horario.hor);
    
    printf("Entre com os Minutos: ");
    scanf("%d", &horario.min);

    printf("Entre com os Segundos: ");
    scanf("%d", &horario.seg);

    printf("Agora sao: %d:%d:%d",horario.hor, horario.min, horario.seg);

    return 0;
}
