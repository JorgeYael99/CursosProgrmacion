fn main() {
    // 1. crear tupla
    let perfil = (27, 9.8, true);
    println!("{:?}",perfil);

    // 2. acceso por indice
    let puntaje = perfil.1;
    println!("{:?}",puntaje);

    // 3. desestructuración
    let (a,b,c)=perfil;
    println!("{a}, {b}, {c}");

    //4. crear arreglo
    let ultimos_niveles: [i32;5]=[1,2,3,4,5];
    println!("{:?}",ultimos_niveles);

    //5. acceso al arreglo
    let first = ultimos_niveles[0];
    let last =ultimos_niveles[4];

    println!("primer valor: {}\nSegundo valor: {}",first,last);

    
}
