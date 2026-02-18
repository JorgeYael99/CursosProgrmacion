print('*** Operadores de asignacion ****')
numero = 5
print(f'Valor de numero: {numero}')
numero = 10
print(f'Valor de numero: {numero}')
cadena= ' saludos desde python'
print(f'valor de la cadena: {cadena}')

#asignacion multiple
x, y, z=5, 'Hola', -9.15

print(f'valor de x = {x} valor de y = {y} valor de z = {z}')

# Asignacion encadenada
a = b = c = 10

print(f'Valor a = {a}, b = {b}, c = {c}')

# Intercambio de valores de una variable, sin utilizar variables temporales
x, y = 5, 10
print(f'Valores iniciales x = {x}, y = {y}')
# aplicando el conceptitop de asignacion multiple intercambiamos valores
x, y= y, x
print(f'Invertir los valores x = {x}, y = {y}')

#Recibir multiples valores de la entrada del usuario 
nombre, apellido = input('Ingresa tu nombre y apellido separados por coma: ').split(',')
print(f'Nombre: {nombre.strip()}; Apellido: {apellido.strip()}')










"""
La función .split() divide una cadena de texto en una lista de subcadenas.
Ejemplos:
texto = "Hola mundo"
resultado = texto.split()  # ["Hola", "mundo"]
fecha = "2025-01-20"
resultado = fecha.split("-")  # ["2025", "01", "20"]
Por defecto divide por espacios en blanco, pero puedes
especificar el separador como parámetro. Retorna una lista 
con las partes divididas
"""