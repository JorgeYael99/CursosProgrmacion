# Programa: reemplazar textos en python

mensaje = "Hola Mundo, Mundo"
print(f"Mensaje original: {mensaje}")
# reemplazar TODAS las apariciones

nuevo = mensaje.replace("Mundo","Python")

print(f"Mensaje nuevo: {nuevo}")

# reemplaza una sola vez

uno_solo = mensaje.replace("Mundo","Dev",1)
print(f"Solo se reemplaza 'Mundo' una sola vez: {uno_solo}")
