"""
Construa uma sequência de instruções para indicar quantos
dias, horas, minutos e segundos equivalem a quantidade que o usuário indica em segundos.
"""

#Variables
minutos = 0
horas = 0
dias = 0

#Main Code
segundos = int(input("Insira o numeor em segundos: "))
minutos = round(segundos / 60, 2)
horas = round(minutos / 60, 2)
dias = round(horas / 24, 2)

print("O valor {0} em minutos é = {1}".format(segundos, minutos))
print("O valor {0} em horas é = {1}".format(segundos, horas))
print("O valor {0} em dias é = {1}".format(segundos, dias))

