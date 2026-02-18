# ERROR COMÚN DE PRINCIPIANTE
respuesta_usuario= "False"

# La función bool evalúa si el string está vacío
es_verdad = bool(respuesta_usuario)
print(f"El valor es: {es_verdad}")
# Output: El valor es: True
# ¿Por qué? porque el string "False" tiene 5 letras. NO está vacío.

# Forma correcta de validar vacío(en cadenas)
texto_vacio = ""
print(f"el texto esta vacio?: {bool(texto_vacio)}")
