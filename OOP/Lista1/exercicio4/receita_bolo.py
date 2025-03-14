"""
Exercício 4 - Receita de Bolo (OBI 2012)
Este programa calcula a quantidade máxima de bolos que podem ser feitos
com os ingredientes disponíveis, seguindo a receita exata.
"""

def calcular_max_bolos(farinha, ovos, leite):
    FARINHA_POR_BOLO = 2  # xícaras
    OVOS_POR_BOLO = 3     # unidades
    LEITE_POR_BOLO = 5    # colheres
    
    bolos_farinha = farinha // FARINHA_POR_BOLO
    bolos_ovos = ovos // OVOS_POR_BOLO
    bolos_leite = leite // LEITE_POR_BOLO
    
    return min(bolos_farinha, bolos_ovos, bolos_leite)

def main():
    try:
        entrada = input().split()
        farinha = int(entrada[0])
        ovos = int(entrada[1])
        leite = int(entrada[2])
        
        max_bolos = calcular_max_bolos(farinha, ovos, leite)
        print(max_bolos)
        
    except (ValueError, IndexError):
        print("Entrada inválida. Forneça a quantidade de farinha, ovos e leite.")

if __name__ == "__main__":
    main() 