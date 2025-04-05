def ordenar_lista(lista):
    """
    Função que recebe uma lista de números e retorna ela ordenada em ordem crescente.
    
    Args:
        lista (list): Lista de números para ordenar
        
    Returns:
        list: Lista ordenada em ordem crescente
    """
    return sorted(lista)

def main():
    # Exemplo de uso
    entrada = [1, 9, 7, 2, 3, 9, 1, 0, 4, 5]
    resultado = ordenar_lista(entrada)
    
    print("Entrada:", entrada)
    print("Saída:", resultado)

if __name__ == "__main__":
    main() 