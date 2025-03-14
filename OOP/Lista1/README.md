# Lista de Exercícios em Python

Este repositório contém as soluções para a lista de exercícios da disciplina SIN141 - Computação Orientada a Objetos.

## Estrutura do Projeto

O projeto está organizado em pastas separadas para cada exercício:

- `exercicio1/`: Cálculo de gorjeta e divisão de conta
- `exercicio2/`: Cálculo de bombons e troco
- `exercicio3/`: Cálculo de média ponderada
- `exercicio4/`: Receita de Bolo (OBI 2012)
- `exercicio5/`: Ordenação de lista
- `exercicio6/`: Campeonato (OBI 2012)
- `exercicio7/`: Conversão de temperatura
- `exercicio8/`: Aviões de Papel (OBI 2009)

## Como Executar

Para executar qualquer um dos exercícios, navegue até a pasta do exercício desejado e execute o arquivo Python correspondente. Por exemplo:

```bash
cd exercicio1
python gorjeta.py
```

## Formato de Entrada

Cada exercício espera uma entrada específica:

1. **Gorjeta**: Dois números (pessoas e valor total)
   ```
   2 30
   ```

2. **Bombons**: Dois números (dinheiro e preço do bombom)
   ```
   20.50 3.5
   ```

3. **Média Ponderada**: Seis números (3 notas e 3 pesos)
   ```
   10.0 1.0 7.0 2.0 8.0 2.0
   ```

4. **Receita de Bolo**: Três números inteiros (farinha, ovos, leite)
   ```
   4 6 10
   ```

5. **Ordenação**: Número N seguido de N números para ordenar
   ```
   10
   8 7 6 1 2 3 9 10 4 5
   ```

6. **Campeonato**: Seis números inteiros (cv, ce, cs, fv, fe, fs)
   ```
   10 5 18 11 2 18
   ```

7. **Temperatura**: Um número (temperatura em Celsius)
   ```
   25
   ```

8. **Aviões de Papel**: Três números inteiros (competidores, papel, folhas)
   ```
   10 100 10
   ```

## Observações

- Todos os programas fazem validação de entrada
- Em caso de entrada inválida, uma mensagem de erro apropriada será exibida
- Os resultados são formatados conforme especificado em cada exercício 