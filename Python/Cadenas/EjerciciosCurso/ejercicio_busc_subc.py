# definimos una cadena principal

cadena = "Hola Pedro, como has estado?"

#buscar 3 subcadenas

sub_uno = cadena.find("Pedro")
sub_dos = cadena.find("Hola")
sub_tres = cadena.find("estado")

#mostrar indice de cada cadena

print(f"""cadena: {cadena} 
subcadena 1: {sub_uno} 
subcadena 2: {sub_dos} 
subcadena 3: {sub_tres}
""")

#caso donde 
sub_noesxi = cadena.find("hola")
print(f"sub cadena no existente: {sub_noesxi}")
