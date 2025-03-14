"""
Exercício 8 - Aviões de Papel (OBI 2009)
Este programa determina se a quantidade de folhas de papel especial compradas
pela diretora é suficiente para o campeonato de aviões de papel.
"""

def verificar_folhas_suficientes(competidores, qtd_papel, folhas_por_competidor):
    # Calcula o total de folhas necessárias
    total_necessario = competidores * folhas_por_competidor
    
    # Verifica se a quantidade disponível é suficiente
    return "Suficiente" if qtd_papel >= total_necessario else "Insuficiente"

def main():
    try:
        # Recebe a entrada do usuário
        entrada = input().split()
        
        # Converte as entradas para inteiros
        competidores = int(entrada[0])
        qtd_papel = int(entrada[1])
        folhas_por_competidor = int(entrada[2])
        
        # Verifica se a quantidade é suficiente
        resultado = verificar_folhas_suficientes(competidores, qtd_papel, folhas_por_competidor)
        
        # Imprime o resultado
        print(resultado)
        
    except (ValueError, IndexError):
        print("Entrada inválida. Forneça o número de competidores, quantidade de papel e folhas por competidor.")

if __name__ == "__main__":
    main() 