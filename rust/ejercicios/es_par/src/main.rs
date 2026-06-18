fn main() {
    
    let n =2;
    
    let check = es_par(n);
    println!("El numero es par (true) o impar (false): {check}");
    
    // flujo de control
    if check {
        println!("El numero es par")
    }else {
        println!("El numero es impar")
    }
    
}

fn es_par(x:i32)-> bool{
    x%2==0
    
}