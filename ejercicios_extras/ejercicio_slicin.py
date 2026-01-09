# EJERCICIO 1
print("EJERCICIO 1")
#se crea la variable texto para usar slicing
texto ="universidad"
print(texto)
#muestra primeros 5 caracteres
first_fv = texto[:5]
print(first_fv)
#muestra los ultimos 4
last_fr= texto[-4:]
print(last_fr)
salt_ds= texto[::2]
print(salt_ds)
invrt = texto[::-1]
print(invrt)
print(f"""Palabra en mayuscula: {texto.upper()}
Palabra alreves: {invrt}
Solo las 3 primeras letras: {texto[0:3]}
""")

# EJERCICIO 2
print("EJERCICIO 2")
codigo = "C#750-OJO-nohtyP-2025"
#recuperar lenguaje "python"
lenguaje = codigo[10:16]

#extraer el año

anio=codigo[17:]

#extraer el numero 750
serie = codigo[2:5]

print(f"""lenguaje: {lenguaje[::-1]} | año: {anio} | Serie: {serie}
""")

#EJERCICIO 3
print("EJERCICIO 3")

codigo1 = "A#999-R#E#K#C#A#H-ovitan"

#extraer id
id_agente = codigo1[2:5]

#extraer rol
rol = codigo1[6:17]

#extraer estadi "nativo"

estado = codigo1[-6:]

print(f"""ID= {id_agente} | rol = {rol[::-2]} | estado = {estado[::-1]} """)

