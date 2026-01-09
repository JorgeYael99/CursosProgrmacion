#concatenacion_caracteres.py

nombre="Jorge"
edad=26
apellido="Padua"
print(f"Hola {nombre}, tu edad es: {edad}")

#Concatenacion de cadenas con "+"
nombre_completo= nombre+" "+apellido
print("Usando signo de \"+\": "+nombre_completo)

#Usando el metodo print ","

print("Usando comas \",\" Nombre:",nombre_completo,", Edad:", edad)

ciudad="CDMX"
pais="Mexico"
profesion="ingeniero"
#Usando el metodo f-string
presentacion=f"Hola, soy {nombre_completo}, tengo {edad+1} años y soy {profesion} en {ciudad}, {pais}"
print(presentacion)