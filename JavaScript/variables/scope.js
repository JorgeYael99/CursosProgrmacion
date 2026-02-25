"use strict";
let counter;
console.log(counter);
{
    counter = 1;
    console.log(counter)
}
// counter = counter + 1;
console.log(counter);


{
    // Abrimos la puerta y entramos a la habitación (inicia el bloque)
    let secreto = "Tengo un millón de dólares";

    {
        console.log(secreto)
    }
    
    // Como estamos dentro de la habitación, podemos ver el secreto
    console.log(secreto); // -> "Tengo un millón de dólares"
}
// Cerramos la puerta (termina el bloque)

// Ahora estamos afuera, en la sala principal
// console.log(secreto); // -> Uncaught ReferenceError: secreto is not defined

// ejemplo manual

{
    const PERROS = "galgo";
    console.log(PERROS);

}
{
    // console.log(PERROS);
}
// console.log(PERROS)

let peso = 100;
{
    let altura = 200;
    {
        let talla = 30;
        console.log(peso)
        console.log(altura)
        console.log(talla)
    }
        console.log(peso)
        console.log(altura)
        // console.log(talla)
}

let nombreGlobal = "mi nombre";

{
    let nombreLocal = "nombre local";
    console.log(nombreLocal);
}
console.log(nombreLocal);