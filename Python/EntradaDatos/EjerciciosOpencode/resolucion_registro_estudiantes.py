# SISTEMA MEJORADO DE REGISTRO DE ESTUDIANTES
# Aplicando mejores prácticas de EntradaDatos y Cadenas

print("***** SISTEMA DE REGISTRO DE ESTUDIANTES *****")

# Captura de datos con validación mejorada
nombre = input("Ingrese nombre del estudiante: ").strip().title()
apellido = input("Ingrese apellido del estudiante: ").strip().title()
edad = int(input("Ingrese edad: "))
nota_final = float(input("Ingrese nota final (0-100): "))
email = input("Ingrese email del estudiante: ").strip().lower()

# Manejo robusto de booleano
beca_respuesta = input("¿Tiene beca? (Sí/No): ").strip().lower()
tiene_beca = beca_respuesta == "sí"

# Manipulación avanzada de cadenas
nombre_completo = f"{nombre} {apellido}"

# Validación básica de email
email_valido = "@" in email and "." in email

# Clasificación según rendimiento
if nota_final >= 90:
    categoria = "Excelente"
elif nota_final >= 80:
    categoria = "Muy Bueno"
elif nota_final >= 70:
    categoria = "Bueno"
else:
    categoria = "Necesita Mejorar"

print("\n" + "=" * 50)
print("          INFORME ACADÉMICO COMPLETO")
print("=" * 50)
print(f"👤 Nombre Completo: {nombre_completo}")
print(f"🎂 Edad: {edad} años")
print(f"📊 Nota Final: {nota_final:.2f} pts")
print(f"📧 Email: {email}")
print(f"✅ Email Válido: {'Sí' if email_valido else 'No'}")
print(f"🎓 Tiene Beca: {'Sí' if tiene_beca else 'No'}")
print(f"🏆 Categoría: {categoria}")
print("=" * 50)

# Mensajes personalizados según estado
if tiene_beca:
    print("🎓 ¡Felicidades! Estudiante con beneficios de beca")

if email_valido:
    print("✅ Email válido para comunicación institucional")
else:
    print("⚠️  Por favor, verifique el formato del email")

print("\n🚀 ¡Registro completado exitosamente!")