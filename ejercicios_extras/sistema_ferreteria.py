#Se inicializa un sistema de ferreria

#se crean constantes y variables
IVA=0.16
nombre_producto="Taladro"
precio_unitario=850.5
cantidad_compra=10
tiene_garantia=True

#se crean los calculos respectivos con las variables y constantes respectivas
cant_subtotal=precio_unitario*cantidad_compra
impuesto=cant_subtotal*IVA
cant_total=cant_subtotal+impuesto
producto_may=nombre_producto.upper()
es_compra_grande=cant_total>2000

#se manda a llamara a pantalla
print(f"""======Sistema de ferretería======
Nombre del producto: {nombre_producto}
Precio unitario: ${precio_unitario}
Cantidad de compra: {cantidad_compra} piezas
IVA: 16% ({IVA})

****Coste total.****
Cantidad subtotal: {cant_subtotal}
Impuesto respectivo: {impuesto}
Total a pagar: {cant_total}
Producto comprado: {producto_may}

¿Cuenta con garantía?: {tiene_garantia}
¿Es una compra mayor a $2000.00?: {es_compra_grande}""")