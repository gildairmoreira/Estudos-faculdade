"""
Exercício 3 - Cálculo de Média Ponderada
Este programa calcula a média ponderada das notas de Matemática, Português
e Conhecimentos Específicos, dados os pesos de cada disciplina.
"""

def calcular_media_ponderada(notas, pesos):
    # Calcula o somatório das notas multiplicadas pelos pesos
    soma_produtos = sum(nota * peso for nota, peso in zip(notas, pesos))
    
    # Calcula o somatório dos pesos
    soma_pesos = sum(pesos)
    
    # Calcula a média ponderada
    media = soma_produtos / soma_pesos
    
    return media

def main():
    try:
        # Recebe a entrada do usuário
        entrada = input().split()
        
        # Converte as entradas para float
        valores = [float(x) for x in entrada]
        
        # Separa notas e pesos
        notas = valores[::2]  # Índices pares (0, 2, 4)
        pesos = valores[1::2]  # Índices ímpares (1, 3, 5)
        
        # Calcula a média ponderada
        media = calcular_media_ponderada(notas, pesos)
        
        # Imprime o resultado com duas casas decimais
        print(f"{media:.2f}")
        
    except (ValueError, IndexError):
        print("Entrada inválida. Forneça as três notas e seus respectivos pesos.")

if __name__ == "__main__":
    main() 