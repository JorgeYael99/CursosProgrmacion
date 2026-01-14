# EJERCICIO INTEGRADO DE CADENAS - 24 RETOS
# TIEMPO LÍMITE: 15 MINUTOS
# INSTRUCCIÓN: Escribe el código para cada línea según el comentario

# ==========================================
print(" SECCIÓN 1: FUNDAMENTOS DE CADENAS")
# ==========================================

# 1. Crea una variable llamada 'fruta' usando comillas simples con el valor 'Manzana'
fruta ='Manzana'
print(fruta)
# 2. Crea una variable llamada 'color' usando comillas dobles con el valor 'rojo'  
color = 'rojo'
print(color)
# 3. Crea una variable 'cita' que contenga: El profesor dijo: "Estudien mucho"
cita = "El profesor dijo: \"Estudien mucho\""
print(cita)
# 4. Imprime las tres variables usando formato f-string
print(f"fruta: {fruta} Color: {color} Cita: {cita}")
# ==========================================
# SECCIÓN 2: MANIPULACIÓN BÁSICA
print("SECCIÓN 2")
# ==========================================

# 5. Declara variable nombre='Ana', apellido='López', edad=25
nombre='Ana'
apellido='López'
edad=25
# 6. Concatena nombre + espacio + apellido usando el operador '+', guarda en nombre_completo
nombre_completo=nombre+" "+apellido
print(f"Nombre completo: {nombre_completo}, Edad: {edad}")
# 7. Crea un separador visual usando '*' multiplicado por 25
separador="*"*25
print(separador)
# 8. Repite tu nombre 3 veces usando multiplicación de cadenas
mi_nombre = "Jorge"*3
print(mi_nombre)
# ==========================================
# SECCIÓN 3: CARACTERES ESPECIALES
print("SECCIÓN 3")
# ==========================================

# 9. Crea una variable 'salto' que contenga "Hola" y "mundo" separados por \n
salto="Hola\nmundo"
print(salto)
# 10. Crea una variable 'tabulado' que contenga "Nombre:" y luego tabulación + "Ana"
tabulado = "Nombre:\tAna"
print(tabulado)
# 11. Escapa comillas dobles creando: Ella dijo: "Python es genial"
palabra="Ella dijo: \"Python es genial\""
print(palabra)
# 12. Crea una ruta de Windows usando backslashes escapados: C:\Users\Docs\archivo.txt
ruta_windows = "C:\\Users\\Docs\\archivo.txt"
print(ruta_windows)
# ==========================================
# SECCIÓN 4: PROPIEDADES DE CADENAS
print("SECCIÓN 4")
# ==========================================

# 13. Obtén la longitud de "Programación en Python" usando len()
cadena_prog = "Programación en Python"
print(len(cadena_prog))

# 14. Demuestra que las cadenas son inmutables: intenta cambiar el primer carácter de "gato" a "G"
#No se puede cambiar la cadena gato
#cadena_g = "gato"
#cadena_g[0]=G  ERROR
# 15. Extrae los primeros 4 caracteres de "Programación" usando slicing [:4]
cadena_prog_sl = "Programación"
print(cadena_prog_sl[:4])
# 16. Extrae los últimos 3 caracteres de "Programación" usando slicing [-3:]
print(cadena_prog_sl[-3:])
# 17. Revierte la cadena "Programación" completa usando slicing [::-1]
print(cadena_prog_sl[::-1])
# ==========================================
# SECCIÓN 5: TRANSFORMACIÓN DE CADENAS
print("SECCIÓN 5")
# ==========================================

# 18. Convierte "hola mundo" a mayúsculas usando .upper()
cadena_hm = "Hola mundo"
hm_may=cadena_hm.upper()

# 19. Convierte "HOLA MUNDO" a minúsculas usando .lower()
hm_min=hm_may.lower()
# 20. Muestra el before/after de ambas transformaciones con texto explicativo
print(f"Antes = Cadena original: {cadena_hm} Despues = cadena mayusculas: {hm_may} cadena minúsculas: {hm_min}")
# ==========================================
# SECCIÓN 6: BÚSQUEDA Y REEMPLAZO
print("SECCIÓN 6")
# ==========================================

# 21. Busca "mundo" en "Hola mundo Python" usando .find(), muestra el índice
cad_21 = "Hola mundo Python"
print(cad_21.find("mundo"))
# 22. Busca "Java" en "Hola mundo Python" usando .find(), observa que retorna -1
print(cad_21.find("Java"))
# 23. Reemplaza "mundo" por "todos" en "Hola mundo" usando .replace() - reemplaza todo
nuevo_mundo=cadena_hm.replace("mundo","todos")
print(nuevo_mundo)
# 24. Reemplaza solo la primera "a" por "á" en "banana" usando .replace("a","á",1)
cadena_24="banana"
banana_con_acento= cadena_24.replace("a","á",1)
print(banana_con_acento)
# ==========================================
# ¡FIN DEL EJERCICIO!
print("FIN DEL EJERCICIO")
# Revisa que todo funcione correctamente y ejecuta tu código
