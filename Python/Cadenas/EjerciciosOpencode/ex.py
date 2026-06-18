# Sistema de almacen de autopartes
# CONSTANTES
IVA=0.16
refaccion=input("Escriba la refacción que requiere: ")
print(refaccion)

precion_uni = float(input("Escriba el precio de la refaccion que se ingresa a sistema: "))
print(precion_uni)

stock=int(input("ingrese la cantidad de stock en almacen: "))

# calculos

hay_stock = stock >= 1

if hay_stock == True:
    print(f"se ingreso {stock} piezas a sistema")
else:
    print("no se ingreso nignuna cantidad en stock")

cant_tot_alm= precion_uni*stock
iva_tot_per_stock=cant_tot_alm*IVA
refaccion_may=refaccion.upper()


print(f"""
******** PRODUCTOS INGRESADOS A ALMACEN ********
PIEZA: {refaccion_may}.
STOCK TOTAL: {stock} pzas.
IVA POR DEFAULT CALCULADO: {IVA}
IVA TOTAL POR STOCK COMPLETO: {iva_tot_per_stock}
PRECIO UNITARIO POR PIEZA: {precion_uni}
***********************************************
 """)