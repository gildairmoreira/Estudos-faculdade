from cliente import Cliente

class Conta:
    def __init__(self, saldo:float, numero:int, correntistas:list):
        self.__saldo = saldo
        self.__numero = numero
        self.__corentistas = correntistas
        self.__operacoes = [("DEPOSITO", saldo)]

    @property
    def saldo(self):
        return self.__saldo

    @saldo.setter
    def saldo(self, value):
        self.__saldo = value

    @property
    def numero(self):
        return self.__numero

    @numero.setter
    def numero(self, value):
        self.__numero = value

    @property
    def corentistas(self):
        return self.__corentistas

    @corentistas.setter
    def corentistas(self, value):
        self.__corentistas = value

    @property
    def operacoes(self):
        return self.__operacoes

    @operacoes.setter
    def operacoes(self, value):
        self.__operacoes = value

    def resumo(self):
        for c in self.corentistas:
            print(f"{c.nome}, cpf: {c.cpf}")
        print (f"CC número: {self.numero} Saldo: {self.saldo:.2f}")
    
    def saque(self, valor:float):
        if self.saldo >= valor:
            self.saldo -= valor
            self.operacoes += [("SAQUE", valor)]
        else:
            print("Saldo insuficiente!!!")

    def deposito(self, valor:float):
        self.saldo += valor
        self.operacoes += [("Deposito",valor)]
    
    def extrato(self):
        print(f"Extrato CC numero {self.numero}")
        for op in self.operacoes:
            print(op[0], op[1])
        print(f"Saldo: {self.saldo}")