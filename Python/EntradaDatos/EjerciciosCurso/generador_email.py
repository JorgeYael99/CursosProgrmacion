# Sistema que genera un email
print("*** Sistema de Email ***")
# Datos
nombre = input("Ingrese su nombre: ")
apellido= input("Ingrese su apellido: ")
empresa= input("Ingrese el nombre de la empresa: ")
dominio= input("Ingrese el dominio: ")

# Datos a cambiar
nombre_em= nombre.strip().lower().replace(" ",".")
apellido_em= apellido.strip().lower().replace(" ",".")
empresa_em= empresa.strip().lower().strip().replace(" ","")

# Email generado
email= f'{nombre_em}.{apellido_em}@{empresa_em}{dominio}'

# Se manda a imprimir en pantalla
print(f"""
Hola {nombre}, tu correo generado por el sistema es: 
{email}
""")
