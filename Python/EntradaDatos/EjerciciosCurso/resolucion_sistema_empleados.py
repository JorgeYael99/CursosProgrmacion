# Vamos a crear un sistema de empleados

print("****** Sistema de empleados *****")
nombre_empleado=input("Nombre del empleado: ")
edad_empleado= int(input("Edad del empleado: "))
salario_empleado= float(input("Salario del empleado: "))
es_jefe_departamento= input('¿Es jefe departamento (Si/No)? ')

# Vamos a convertir a un tipo bool la variable es_jefe_departamento
es_jefe_departamento= es_jefe_departamento.lower() == 'si'

# Imprimir los valores del empleado
print(f"""
**** Datos del empleado ****
Nombre del empleado: {nombre_empleado}
Edad del empleado: {edad_empleado}
Salario del empleado: {salario_empleado:.2f}
Es jefe de departamento: {es_jefe_departamento}
 """)