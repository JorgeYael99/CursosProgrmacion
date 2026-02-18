# Programa entrada datos python
nombre = input("Proporciona tu nombre: ")
print(f"Tu nombre es: {nombre}")

# Cuidado con la conversion de tipos al trabajr con valores númericos
# Forma correcta: envolver con int() o float()

#para valores de tipo entero (edad, cantidad)

edad=int(input("Tu edad: "))
print(f"tu edad es: {edad}")

print(edad+5) # ¡funciona! (20 + 5)

# Para decimales (precio, altura)
altura= float(input("Tu altura: "))
print(f"Tu altura es: {altura}")