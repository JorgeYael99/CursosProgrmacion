# Programa: convertir tipos en Python

# Definimos una variable de tipo String
numero_texto= "50"
# Solo se puede concatenar strings, no valores de enteros o floats
#total = numero_texto + 10 -> ERROR

total= int(numero_texto) + 10
print("la sumatoria total es de: ",total)

concatenacion= numero_texto+str(10)
print(f"Resultado de la concatenacion: {concatenacion}")