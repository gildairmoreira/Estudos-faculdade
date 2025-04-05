class Cliente:
    def __init__(self, nome:str, cpf:str):
        self.__nome = nome
        self.__cpf = cpf

    @property
    def nome(self):
        return self.__nome

    @nome.setter
    def nome(self, value):
        self.__nome = value

    @property
    def cpf(self):
        return self.__cpf

    @cpf.setter
    def _pf(self, value):
        self.__cpf = value

