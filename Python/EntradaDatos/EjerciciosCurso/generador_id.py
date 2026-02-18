from random import randint
#sistema para generar un ID único

print("*** Sistema para generar un ID único ***")

nombre_usuario = input('Escriba su nombre: ')
apellido_usuario = input('Ingrese su apellido: ')
año_nacimiento = input('Ingrese su año de nacimiento (YYYY): ')

# vamos a tomar las primeras 2 lestra del nombre
nom_prim_dos = nombre_usuario.strip().upper()[:2]
ape_prim_dos= apellido_usuario.strip().upper()[:2]
nac_prim_dos= año_nacimiento.strip().upper()[2:]
valor_aleatorio= randint(1000,9999)
id_unico= f'{nom_prim_dos}{ape_prim_dos}{nac_prim_dos}{valor_aleatorio}'


print(f'''
Hola {nombre_usuario},
        Tu nuevo numero de identificación (ID) generado por el sistema es:
        {id_unico}
        Felicidades
''')
