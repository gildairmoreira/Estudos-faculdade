"""
Exercício 1 - Cálculo de Gorjeta e Divisão de Conta
Este programa calcula o valor da gorjeta (10%) e o quanto cada pessoa deve pagar
em uma divisão equalitária da conta de um restaurante.
"""

def calcular_gorjeta_e_divisao(num_pessoas, valor_total):
    # Calcula a gorjeta (10% do valor total)
    gorjeta = valor_total * 0.1
    
    # Calcula o valor total com gorjeta
    valor_com_gorjeta = valor_total + gorjeta
    
    # Calcula o valor por pessoa
    valor_por_pessoa = valor_com_gorjeta / num_pessoas
    
    return gorjeta, valor_por_pessoa

def main():
    try:
        # Recebe a entrada do usuário
        entrada = input().split()
        num_pessoas = int(entrada[0])
        valor_total = float(entrada[1])
        
        # Calcula a gorjeta e o valor por pessoa
        gorjeta, valor_por_pessoa = calcular_gorjeta_e_divisao(num_pessoas, valor_total)
        
        # Imprime o resultado
        print(f"{gorjeta:.1f} {valor_por_pessoa:.1f}")
        
    except (ValueError, IndexError):
        print("Entrada inválida. Forneça o número de pessoas e o valor total da conta.")

if __name__ == "__main__":
    main() 