"""
Dados quatro números distintos pelo usario, desenvolver um algoritmo
que determine e imprima a soma dos três menores.
"""

#Variables
soma = 0

#Main Code
numero1 = int(input("Insira o valor do numero: "))
numero2 = int(input("Insira o valor do numero: "))
numero3 = int(input("Insira o valor do numero: "))
numero4 = int(input("Insira o valor do numero: "))

if (numero1 > numero2 ) & (numero1 > numero3) & (numero1 > numero4):
    soma = (numero2 + numero3 + numero4)
    print("Soma = ", soma)
elif (numero2 > numero1) & (numero2 > numero3) & (numero2 > numero4):
    soma = numero1 + numero3 + numero4
    print("Soma = ", soma)
elif (numero3 > numero1) & (numero3 > numero2) & (numero3 > numero4):
    soma = numero1 + numero2 + numero4
    print("Soma = ", soma)
elif (numero4 > numero1) & (numero4 > numero2) & (numero4 > numero3):
    soma = numero1 + numero2 + numero3
    print("Soma = ", soma)