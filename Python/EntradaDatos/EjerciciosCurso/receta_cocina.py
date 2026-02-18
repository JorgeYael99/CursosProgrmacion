# Receta de cocina
# Valores a introducir
print("*** Receta de cocina ***")
nombre_receta = input("Escriba nombre de receta aqui: ")
ingredientes = input("Escriba los nombres de los ingredientes: ")
tiempo_preparacion= int(input("Escriba el tiempo de preparacion para esta receta (min): "))
dificultad= input("Escriba el tipo de dificultad de esta receta (Alta, Media, Baja): ")
"""
print(nombre_receta)
print(ingredientes)
print(tiempo_preparacion)
print(dificultad)
"""

print(f"""----------------

Nombre de receta: {nombre_receta}
Ingredientes: {ingredientes}
Tiempo de preparacion: {tiempo_preparacion}
Dificultad: {dificultad}
""")