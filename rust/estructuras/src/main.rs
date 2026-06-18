use std::collections::HashSet;
// use std::fmt::Display;

fn main() {
    // listas
    let mut my_list: Vec<&str> = vec!["Jorge", "Yael","@Yael","ISC"];
    my_list.push("hola");
    println!("{:?}",my_list);
    println!("{}",my_list[0]);
    println!("{}",my_list[1]);
    println!("{}",my_list[2]);
    println!("{}",my_list[3]);
    println!("{}",my_list[4]);
    // println!("{}",my_list[5]); no hay objeto numero 5 en el vector

    //sets
    let mut my_set: HashSet<&str>= vec!["Jorge", "Yael","@Yael","ISC"].into_iter().collect();
    my_set.insert("hola");
    my_set.insert("Yael");
    println!("{:?}",my_set);

    //forma de hacer un set "desde 0"

    let mut invitados: HashSet<&str>= HashSet::new();
    invitados.insert("Jorge");
    invitados.insert("Enrique");
    invitados.insert("Pablo");
    invitados.insert("Emanuel");
    println!("Lista de invitados: {:?}",invitados);
    invitados.insert("Jorge");
    println!("Lista de invitados actualizada: {:?}",invitados);
    println!("Está Jorge? {}",invitados.contains("Jorge"));
    println!("Está Luz? {}",invitados.contains("Luz"));


let numeros = vec![1, 2, 2, 3, 4, 4, 4, 5];
let unicos: HashSet<_> = numeros.into_iter().collect();
println!("{:?}", unicos);


}
