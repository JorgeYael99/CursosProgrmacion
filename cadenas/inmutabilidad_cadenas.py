#inmutabilidad_cadenas.py

#Ejemplo: cadenas inmutabilidad cadenas

animal="gato"
#animal[1]="s" -- Marca error porque un string es inmutable, no puede cambiar ninguna letra o cadena

#Lo mas viable seria concatenar valores
plural=animal+"s"
print(plural)

#Usamos f string para concatenar las variables con las letral para hacer plural el significado
plural=f"{animal}s"
print(plural)
