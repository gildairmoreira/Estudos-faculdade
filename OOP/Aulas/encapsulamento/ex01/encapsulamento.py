class testeEncapsulamento:
  def __init__(self):
    self.publica = "atributo publico"
    self._protegido = "atributo protegido"
    self.__privado = "atributo privado"
    
  def get_privado(self):
    return self.__privado