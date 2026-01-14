# EJERCICIO: SISTEMA DE REGISTRO DE ESTUDIANTES
# INSTRUCCIÓN: Escribe el código necesario para cada uno de los siguientes puntos
# INTEGRACIÓN: Aplica lo aprendido en los módulos de Cadenas y EntradaDatos

# 1. Solicita al usuario su nombre usando input() con el mensaje "Ingrese nombre del estudiante: " y guárdalo en la variable 'nombre'
print("SISTEMA DE REGISTRO DE ESTUDIANTES")
nombre= input("Ingrese nombre del estudiante: ").strip().title()
# 2. Solicita al usuario su apellido usando input() con el mensaje "Ingrese apellido del estudiante: " y guárdalo en la variable 'apellido'
apellido= input("Ingrese apellido del estudiante: ")
# 3. Solicita la edad del estudiante y conviértela a entero usando int(), guárdalo en la variable 'edad'
edad=int(input("Ingrese la edad del estudiante: "))
# 4. Solicita la nota final del estudiante y conviértela a decimal usando float(), guárdalo en la variable 'nota_final'
nota_final= float(input("Ingrese la nota final del estudiante: "))
# 5. Solicita el email del estudiante y guárdalo en la variable 'email'
email= input("Ingrese el email del estudiante: ")
# 6. Solicita si tiene beca. Para convertir la respuesta a booleano correctamente, usa la técnica: respuesta == 'sí'. Guárdalo en 'tiene_beca'
tiene_beca= input("¿El estudiante tiene beca? ")
tiene_beca= tiene_beca.lower() == 'si'
# 7. Combina nombre y apellido con un espacio entre ellos para formar el nombre completo. Ejemplo: nombre_completo = nombre + " " + apellido
nombre_completo= nombre+" "+apellido
# 8. Imprime un separador visual usando 30 asteriscos: "*"
print("*"*30)
# 9. Imprime el título "DATOS DEL ESTUDIANTE:" usando f-string
print(f"****** DATOS DEL ESTUDIANTE ******")
# 10. Imprime el nombre completo formateado: f"Nombre completo: {nombre_completo}"
print(f"Nombre completo: {nombre_completo}")
# 11. Imprime la edad formateada: f"Edad: {edad} años"
print(f"Edad: {edad}")
# 12. Imprime la nota final con 2 decimales: f"Nota final: {nota_final:.2f}"
print(f"Nota final: {nota_final:.2f}")
# 13. Imprime el email: f"Email: {email}"
print(f"Email: {email}")
# 14. Imprime el estado de beca: f"Tiene beca: {tiene_beca}"
print(f"Tiene beca: {tiene_beca}")
# 15. Imprime un separador final de 30 asteriscos
print("*"*30)
