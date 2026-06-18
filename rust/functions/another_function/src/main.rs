fn main() {
    println!("Hello, world!");

    another_function();
    an_fun(5);
    print_labeled_mesurement(5, 'h');

    //SENTENCIAS: INSTRUCCIONES QUE NO DEVUELVEN UN VALOR
    // let x = (let y = 6);

    let y ={
        let x = 3;
        x + 1
    };
    println!("the value of y is: {y}");

    let x = plus_one(1) ;
    println!("the value of x is: {x}");

    let list = calcular_puntos(5);
    println!("El calculo de puntos total es de: {list}");
}

fn another_function() {
    println!("Hola rustaceos!! 🦀🦀🦀🦀🦀")
}
fn an_fun(x:i32) {
    println!("El valor de x es: {x}");
}
fn print_labeled_mesurement(value:i32, unite_label:char) {
    println!("The mesurement is: {value}{unite_label}");
}

fn plus_one(x:i32) ->i32 {
    x+1
}

fn calcular_puntos(base:i32) -> i32 {
    let bonificacion = 10; //sentencia 1
    let multiplicador = 2; //sentencia 2

    base * multiplicador + bonificacion /*expresion final
    (OCUPA LAS SENTENCIAS ANTERIORES)*/
}
