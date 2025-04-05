class Horario:
  def __init__(self):
    self.__hora = "00"
    self.__min = "00"
    self.__seg = "00"
  @property
  def hora(self):
    """Getter do atributo"""
    return self.__hora

  @hora.setter
  def hora(self, valor):
    """Setter do atributo"""
    self.__hora = valor

  @property
  def min(self):
    """Getter do atributo"""
    return self.__min

  @min.setter
  def min(self, valor):
    """Setter do atributo"""
    self.__min = valor

  @property
  def seg(self):
    """Getter do atributo"""
    return self.__seg

  @seg.setter
  def seg(self, valor):
    """Setter do atributo"""
    self.__seg = valor

  @property
  def horario_completo(self):
    """Property somente leitura"""
    return f"{self.__hora}:{self.__min}:{self.__seg}"