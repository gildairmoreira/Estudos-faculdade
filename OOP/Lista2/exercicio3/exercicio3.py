def fibonacci(n):
    """
    Função que calcula o n-ésimo termo da sequência de Fibonacci.
    F(n) = F(n-1) + F(n-2), com F(0) = 0 e F(1) = 1
    
    Args:
        n (int): Posição do termo desejado na sequência
        
    Returns:
        int: O n-ésimo termo da sequência de Fibonacci
    """
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    
    fib_anterior = 0
    fib_atual = 1
    
    for _ in range(2, n + 1):
        fib_anterior, fib_atual = fib_atual, fib_anterior + fib_atual
    
    return fib_atual

def main():
    # Exemplo de uso
    n = 10
    resultado = fibonacci(n)
    
    # Mostra os primeiros n+1 termos da sequência
    print("Sequência de Fibonacci até o termo", n, ":")
    sequencia = [fibonacci(i) for i in range(n + 1)]
    print(sequencia)
    
    print(f"\nO {n}-ésimo termo é: {resultado}")

if __name__ == "__main__":
    main() 