use std::io;
use rand::Rng;

fn main() {
    println!("Adivina el numero!");

    let numero_secreto = rand::thread_rng().gen_range(1..=100);

    println!("El numero secreto es: {numero_secreto}");
    println!("ingresa tu numero adivinado");

    let mut adivinado = String::new();

    io::stdin()
        .read_line(&mut adivinado)
        .expect("fallo al leer la linea");

    println!("tu numero adivinado: {adivinado}");
        
}
