"""
Exercício 2 - Cálculo de Bombons e Troco
Este programa calcula o número máximo de bombons que podem ser comprados
e o troco, dado um valor em dinheiro e o preço do bombom.
"""

def calcular_bombons_e_troco(dinheiro, preco_bombom):
    # Calcula quantos bombons podem ser comprados
    num_bombons = int(dinheiro // preco_bombom)
    
    # Calcula o troco
    troco = dinheiro - (num_bombons * preco_bombom)
    
    return num_bombons, troco

def main():
    try:
        # Recebe a entrada do usuário
        entrada = input().split()
        dinheiro = float(entrada[0])
        preco_bombom = float(entrada[1])
        
        # Calcula o número de bombons e o troco
        num_bombons, troco = calcular_bombons_e_troco(dinheiro, preco_bombom)
        
        # Imprime o resultado
        print(f"{num_bombons} {troco:.1f}")
        
    except (ValueError, IndexError):
        print("Entrada inválida. Forneça o valor em dinheiro e o preço do bombom.")

if __name__ == "__main__":
    main() 