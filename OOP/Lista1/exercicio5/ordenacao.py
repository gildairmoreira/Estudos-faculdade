"""
Exercício 5 - Ordenação de Lista
Este programa recebe uma lista de números e retorna a mesma lista ordenada
em ordem crescente.
"""

def ordenar_lista(lista):
    return sorted(lista)

def main():
    try:
        n = int(input())
        entrada = input().split()
        lista = [int(x) for x in entrada]
        
        if len(lista) != n:
            raise ValueError("Tamanho da lista não corresponde ao valor informado")
        
        lista_ordenada = ordenar_lista(lista)
        print(" ".join(map(str, lista_ordenada)))
        
    except ValueError as e:
        print(f"Entrada inválida: {str(e)}")

if __name__ == "__main__":
    main() 