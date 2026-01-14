# Generador de Email: crear un programa para generar un email a partir de los siguientes datos:

# nombre_usuario= "Ubaldo Acosta Soto"
# empresa= "Global Mentoring"
# dominio= "com.mx"

# Resultado final = email: ubaldo.acosta.soto@globalmentoring.com.mx

nombre = "Ubaldo"
apellido_pat= "Acosta"
apellido_mat= "Soto"
empresa= "Global Mentoring"
dominio=".com.mx"

nombre_usuario=f"{nombre} {apellido_pat} {apellido_mat}"
#print(nombre_usuario)
nombre_usuario_normalizado= f"{nombre.lower()}.{apellido_pat.lower()}.{apellido_mat.lower()}" 
#print(nombre_usuario_normalizado)
dominio_email_normalizado= f"@{empresa.lower()[:6]}{empresa.lower()[-9:]}{dominio}"
#print(dominio_email_normalizado)

email_usuario=f"{nombre_usuario_normalizado}{dominio_email_normalizado}"

#print(email_usuario)

print(f"""*** Generador de Email ***
Nombre usuario= {nombre_usuario}
Nombre usuario normalizado: {nombre_usuario_normalizado}

Nombre empresa: {empresa}
Extensión del dominio: {dominio}
Dominio de email normalizado: {dominio_email_normalizado}

Email final generado: {email_usuario} """)

