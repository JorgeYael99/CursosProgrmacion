use core::f64;

fn main() {
    
    /*
    Tamaño	Signed	Unsigned
    8-bit	i8	    u8
    16-bit	i16	    u16
    32-bit	i32	    u32
    64-bit	i64	    u64
    128-bit	i128	u128
 Dependiente 
 de la 
 arquitectura	isize	usize     
     */
      
    // Enteros: u8 para numeros que no requieran ser negativos
    // i8 para los numeros que vayan a ser negativos
    println!("####Enteros####");
    let _d1: u8 =  255;
    let _d2: i8 = 127;   
    println!("Entero 1: {_d1}, Entero 2: {_d2}");

    // Literales
    println!("####Literales####");
    /*
    Literales numéricos	    Ejemplo
    Decimal	                98_222
    Hex	                    0xff
    Octal	                0o77
    Binario	                0b1111_0000
    Byte (u8 solamente)	    b'A'  
    */


    // Decimal (base 10)
    let decimal = 98_222;        // la barra baja es solo para leer mejor, equivale a 98222

    // Hexadecimal (base 16) → empieza con 0x
    let hex = 0xff;              // 255 en decimal

    // Octal (base 8) → empieza con 0o
    let octal = 0o77;            // 63 en decimal

    // Binario (base 2) → empieza con 0b
    let binario = 0b1000_0001_0000;   // 240 en decimal

    // Byte (solo para u8) → con b' ' y un carácter ASCII
    let byte = b'A';             // 65 (el código ASCII de 'A')

    // También podemos poner el tipo explícito al final (sufijo de tipo)
    let con_sufijo = 57u8;       // 57, pero forzado a ser u8

    // Imprimimos todos
    println!("Decimal:   {decimal}");
    println!("Hex:       {hex} (decimal: {hex})");
    println!("Octal:     {octal} (decimal: {octal})");
    println!("Binario:   {binario} (decimal: {binario})");
    println!("Byte:      {byte} (decimal: {byte})");
    println!("Con sufijo: {con_sufijo}");


    // Flotantes
    println!("####Flotantes####");
    let _d3 = 9.1;
    let _d4:f32=3.0;
    println!("{_d3}");
    println!("{_d4}");


    // Operaciones numericas
    println!("####Operaciones numericas####");
    let sum = 1 + 1;
    let resta = 1-1;
    let multiplicacion=1*1;
    let division = 10 / 2;
    let men_division = -10 / 2;
    let residuo = 10%2;

    println!("1 + 1:{sum}");
    println!("1 - 1: {resta}");
    println!("1 * 1: {multiplicacion}");
    println!("10 / 2: {division}");
    println!("-10 / 2: {men_division}");
    println!("10 % 2: {residuo}");

    // Booleanos
    println!("####Booleanos####");
    let t = true;
    let p: bool = false;
    println!("Tipose de Booleanos: {t}, {p}");

    // Carácteres
    println!("####Carácteres####");
    let nm = 'n';
    let na = 'N';
    let nb = '💀';

    println!("Tipo de carácteres: {nm}, {na}, {nb}");


    // Tuplas
    println!("####Tuplas####");
    /*aqui se asignan los valores signed, unsigned, float
    i32, u32, f64, true (o false) y char*/
    let tup_1: (&str ,i32, f64, u8, bool, char) = ("hola mundo",500, 6.4, 1,true,'a');
    println!("tupla inicial: {:?}",tup_1);


    // desestructuración: rompe la unica tupla en tre partes
    let tup = (12, 12, 12.1);
    let (a,b,c) = tup;
    println!("valores que ocuparon una desestructuración: \n{a}, {b}, {c}");

    /* Con un punto (.) seguido de la letra o variable que se le asigno a cada
    elemento de la tupla cuenta como que estas mandando a llamar a esta misma */

    let n = (1,2,3.1);
    let one = n.0;
    let two = n.1;
    let three = n.2;
    println!("valores de la tupla que se mandan a llamar con un punto: \n{one} {two} {three}");

    // Arreglos
    println!("####Arreglos####");
    let ar =[1,2,3,4,5];
    println!("Primer arreglo: {:?}\n",ar);

    // arreglo de meses del año
    let months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
    println!("Arreglo de los meses que hay en un año: {:?}\n",months);

    // arreglo aignando el tipo de valor para cada numero
    let ara: [i32; 5]= [1,2,3,4,5];
    println!("Los 5 elementos con valor i32 son: {:?}\n", ara);


    // 3 es el valor que se va a implementar/imprimir, 5 es el rango del arreglo
    let arb = [3; 5];
    println!("A 5 elementos se le asigno cada uno un 3 de esta manera: {:?}\n",arb);

    // se manda a llamar cada elemento del arreglo con "[]"
    let arc = [1,2,3,4,5];
    let first = arc[0];
    let second = arc[1];
    println!("Elementos del arreglo {:?}",arc);
    println!("First: {:?} \nSecond: {:?}",first, second);





}
