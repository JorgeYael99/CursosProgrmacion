# Valores aleatorios con la fuincion randint
#formas  para importar modulos
import random
#especificamos modiulo y funcion (opcion recomendada para trabajar con funcion especifica de modulo)
from random import randint
#En caso de no especificar, se tendrá que agregar en cada variable que querramos ocupar una funcion el nombre del modulo + la funcion
#random.randint

#Generar numero aleatorio entre 1 y 10

numero = randint(1, 10)
#primer numero no puede ser mayor al segundo
print(f"numero aleatorio entre 1 y 10: {numero}")

# Simulador dado de seis caras

dado = randint(1, 6)
print(f"Resultado de lanzar el dado: {dado}")
