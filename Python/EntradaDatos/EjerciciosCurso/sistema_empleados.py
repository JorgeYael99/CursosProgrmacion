# Vamos a crear un sistema de empleados

print("****** Sistema de empleados *****")
nombre_empleado=input("Ingrese su nombre: ")
edad_empleado= int(input("Ingrese su edad: "))
salario_empleado= float(input("Ingrese su salario: "))
es_jefe_departamento= bool(input("Es jefe de departamento? (en caso de no serlo solo da click a \"ENTER\")"))

print(f"""
**** Datos del empleado ****
Nombre del empleado: {nombre_empleado}
Edad del empleado: {edad_empleado}
Salario del empleado: {salario_empleado}
Es jefe de departamento: {es_jefe_departamento}
 """)