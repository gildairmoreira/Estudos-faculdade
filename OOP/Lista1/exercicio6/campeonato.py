"""
Exercício 6 - Campeonato (OBI 2012)
Este programa determina qual time está melhor classificado no campeonato
baseado em número de vitórias, empates e saldo de gols.
"""

def calcular_pontos(vitorias, empates):
    return (vitorias * 3) + empates

def determinar_vencedor(cv, ce, cs, fv, fe, fs):
    pontos_cormengo = calcular_pontos(cv, ce)
    pontos_flaminthians = calcular_pontos(fv, fe)
    
    if pontos_cormengo > pontos_flaminthians:
        return "Cormengo"
    elif pontos_flaminthians > pontos_cormengo:
        return "Flaminthians"
    else:
        if cs > fs:
            return "Cormengo"
        elif fs > cs:
            return "Flaminthians"
        else:
            return "Empate"

def main():
    try:
        entrada = input().split()
        cv = int(entrada[0])
        ce = int(entrada[1])
        cs = int(entrada[2])
        fv = int(entrada[3])
        fe = int(entrada[4])
        fs = int(entrada[5])
        
        resultado = determinar_vencedor(cv, ce, cs, fv, fe, fs)
        print(resultado)
        
    except (ValueError, IndexError):
        print("Entrada inválida. Forneça os dados dos dois times.")

if __name__ == "__main__":
    main() 