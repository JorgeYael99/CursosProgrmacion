// Variables: usar mut para hacerlas mutables, en caso de no requerir dejalas sin mut para que sean inmutables
fn main() {
    let mut x = 5 ;
    println!("The value of x is: {x}");
    x=6;
    println!("The new value of x is: {x}");
// Constantes: no se pueden convertir en utables nunca jamas
    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;
    println!("Constante de 3 horas en segundos: {THREE_HOURS_IN_SECONDS}");

    // Shadowing
    println!("Shadowing");
    let y = 2;
    let y = y + 1;
    println!("El valor de y original es: {y}");
    {
        let y = y * 2 ;
        println!("El valor de 'y' dentro de este ámbito es: {y}")
    }

    println!("El valor final de 'y' es de: {y}");

    let espacios = "    ";
    let espacios = espacios.len();
    println!("{espacios}");
}
