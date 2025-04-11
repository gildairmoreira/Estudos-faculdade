class ContaEspecial:
  def __init__(self, titular, saldo, limite):
    self.titular = titular
    self.saldo = saldo
    self.limite = limite

  def depositar(self, valor):
    if valor > 0:
      self.saldo += valor
      print(f"Depósito de R${valor:.2f} realizado com sucesso!")
    else:
      print("Valor de depósito inválido.")

  def sacar(self, valor):
    if valor > 0 and (self.saldo + self.limite) >= valor:
      self.saldo -= valor
      print(f"Saque de R${valor:.2f} realizado com sucesso!")
    else:
      print("Saldo insuficiente ou valor inválido.")

  def consultar_saldo(self):
    print(f"Saldo atual: R${self.saldo:.2f}")
    print(f"Limite disponível: R${self.limite:.2f}")

  def alterar_limite(self, novo_limite):
    if novo_limite >= 0:
      self.limite = novo_limite
      print(f"Novo limite de R${novo_limite:.2f} definido com sucesso!")
    else:
      print("Valor de limite inválido.")