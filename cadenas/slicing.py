# slicing
texto = "programacion"
print(texto)
# muestra los caracteres del 0 al 3
prim_tres = texto[:4]
print(prim_tres)
#muestra en pantalla desde los char -11 al -6
print(texto[-12:-5])
#salto de 3 en 3
print(texto[5::3])
#todo el texto al reves
print(texto[::-1])

print(f"""
======USANDO SLICIN======

Palabra {texto.upper()}
Los primeros 4 caracteres de la palabra {texto} son: {texto[0:4]}

La palabra {texto} alreves se escribe asi: {texto[::-1]}

Tomamos las letras del -1 al -4: {texto[-4:]}
""")



