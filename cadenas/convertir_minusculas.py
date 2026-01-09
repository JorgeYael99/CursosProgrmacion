#convertir_minusculas.py

#se manda a llamar la cadena de texto
texto="LA VIDA COMO LA QUIERES SI TU QUIERES"
#se identifica el tamaño de la cadena
tamanio=len(texto)
#se manda a llamar el metodo .lower() para convertir de mayusculas a minusculas
conversion=texto.lower()
#se manda a imprimir usando el metodo f-string
texto_completo=f"""El texto: \"{texto}\" tiene un tamaño de {tamanio} caracteres.
Se usó el metodo .lower() para la conversion de mayusculas a minusculas, obteniendo este resultado:
\"{conversion}\""""
print(texto_completo)