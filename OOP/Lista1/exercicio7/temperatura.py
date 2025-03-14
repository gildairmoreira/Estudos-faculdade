"""
Exercício 7 - Conversão de Temperatura
Este programa converte uma temperatura em graus Celsius para Fahrenheit
usando a fórmula: F = C * (9.0 / 5.0) + 32.0
"""

def celsius_para_fahrenheit(celsius):
    return celsius * (9.0 / 5.0) + 32.0

def main():
    try:
        celsius = float(input())
        fahrenheit = celsius_para_fahrenheit(celsius)
        print(int(fahrenheit))
        
    except ValueError:
        print("Entrada inválida. Forneça a temperatura em Celsius.")

if __name__ == "__main__":
    main() 