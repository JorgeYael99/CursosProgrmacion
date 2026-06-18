# Se requiere un nombre

complete_name = input("Escripe tu nombre completo aquí: ").strip().title()
age =int(input("Ingresa tu edad: "))
num_books = int(input("Cuantos libros compraste?: "))
es_membr = input("Cuentas con membresia?: (si)").lower() == "si"
price_per_book = float(input("Precio Promedio por libro"))
tot_gasto= num_books * price_per_book

tot_gasto_true= tot_gasto

if es_membr:
    tot_gasto_true = tot_gasto*.90
else:
    print("no se aplica promoción")

print(f"""
######## Datos Completos ##########
Nombre del empleado: {complete_name}
Edad del empleado: {age}
Numero de libros: {num_books}
Es miebro?: {es_membr}
Precio promedio por libro? {price_per_book}
Precio total por todos los libros: {tot_gasto}
precio con promoción: {tot_gasto_true}
""")
