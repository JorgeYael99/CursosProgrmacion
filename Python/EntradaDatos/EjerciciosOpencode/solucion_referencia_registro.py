# SOLUCIÓN DE REFERENCIA - SISTEMA DE REGISTRO DE ESTUDIANTES

print("***** SISTEMA DE REGISTRO DE ESTUDIANTES *****")

nombre = input("Ingrese nombre del estudiante: ").strip().title()
apellido = input("Ingrese apellido del estudiante: ").strip().title()
edad = int(input("Ingrese edad: "))
nota_final = float(input("Ingrese nota final (0-100): "))
email = input("Ingrese email del estudiante: ").strip().lower()

beca_respuesta = input("¿Tiene beca? (Sí/No): ").strip().lower()
tiene_beca = beca_respuesta == "sí"

nombre_completo = f"{nombre} {apellido}"
email_valido = "@" in email and "." in email

print("\n" + "=" * 50)
print("          DATOS DEL ESTUDIANTE")
print("=" * 50)
print(f"Nombre Completo: {nombre_completo}")
print(f"Edad: {edad} años")
print(f"Nota Final: {nota_final:.2f}")
print(f"Email: {email}")
print(f"Email Válido: {email_valido}")
print(f"Tiene Beca: {tiene_beca}")
print("=" * 50)

print("¡Registro completado exitosamente!")