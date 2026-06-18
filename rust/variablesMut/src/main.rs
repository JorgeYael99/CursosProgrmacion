fn main() {
    let cadena: &str="esto es una cadena";
    println!("{cadena}");
    
    let mut _nm:i32=10;

    _nm += 12;
    print!("{_nm}");

    let new_ :char='A';
    println!("\n{new_}");

    let cad: String=String::from("\nEste es otro tipo de cadena");
    println!("{cad}");

    let my_int: i32 =0;
    let my_string = "ho";
    //if
    if my_int==10 && my_string=="hola" {
        println!("el numero entero es 10 y mi cadena es Hola")       
    }else if my_int==11 || my_string=="ho"  {
        println!("El numero es 11 o mi cadena es Ho")
    }else  {
        println!("El numero no es 10 ni 11 y no coincide ninguna cadena")
    }
    let x = 5;

    let x = x + 1;

    {
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }

    println!("The value of x is: {x}");
    // Constantes
    const O: &str = "esto es una constante";
    println!("{O}");
   

}
