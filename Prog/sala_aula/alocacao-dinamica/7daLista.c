#include <stdio.h>
#include <math.h>

int hipFat(int n){
    if (n==1)
    {
        return 1;
    }else{
        return pow(n,n)*hipFat(n-1);
    }
    
}


int main() {
    int n;
    
    // printf("Digite o valor de N: ");
    // scanf("%d", &n);

    printf("%d",hipFat(3));
    
    return 0;
}
