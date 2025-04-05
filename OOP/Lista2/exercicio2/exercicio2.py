class ContadorPalavras:
    def __init__(self):
        self.__frase = ""
        self.__quantidade = 0

    @property
    def frase(self):
        """Getter para a frase"""
        return self.__frase
    
    @frase.setter
    def frase(self, nova_frase):
        """Setter para a frase"""
        self.__frase = nova_frase
        self.__quantidade = len(nova_frase.strip().split())
    
    @property
    def quantidade(self):
        """Getter para a quantidade de palavras"""
        return self.__quantidade

def main():
    # Exemplo de uso
    contador = ContadorPalavras()
    contador.frase = "  Python é uma linguagem de programação incrível!  "
    
    print("Frase:", contador.frase)
    print("Número de palavras:", contador.quantidade)

if __name__ == "__main__":
    main() 