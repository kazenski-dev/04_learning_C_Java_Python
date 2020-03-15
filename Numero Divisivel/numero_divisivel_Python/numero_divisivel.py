"""
Desenvolver um algoritmo que leia um número inteiro e verifique
se o número é divisível por 5 e por 3 ao mesmo tempo.
"""

#Variables

#Main Code
numero = int(input("Insira o numero para analise: "))
if (numero % 3 == 0) & (numero % 5 == 0):
    print("Numero divisivel por 3 e 5.\n")
else:
    print("Numero nao divisivel por 3 e 5.\n")