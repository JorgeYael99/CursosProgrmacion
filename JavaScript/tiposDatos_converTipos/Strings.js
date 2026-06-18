// se mandar a llamar algunas cadenas
let  country  =  "Malawi";
let  continent  =  'Africa';
// se manda en pantalla y se verifica los tipos de datos
console.time("Medicion 1");
console.log(country);  //  ->  Malawi
console.log(typeof  country);  //  ->  string
console.log(continent);  //  ->  Africa
console.log(typeof  continent);  //  ->  string
// se usan backslash para usar comillas simples o dobles dependiendo el caso
let  message1  =  'The  vessel  \'Mars\'  called  at  the  port.';
let  message2  =  "Cyclone  \"Cilida\"  to  pass  close  to  Mauritius.";
   
console.log(message1);  //  ->  The  vessel  'Mars'  called  at  the  port.
console.log(message2);  //  ->  Cyclone  "Cilida"  to  pass  close  to  Mauritius.
//  uso de doble \\   
let  path  =  "C:\\Windows";
console.log(path);  //  ->  C:\Windows
let sentencia = `${country} esta en el continente ${continent}` // alt + 96 para obtener ``
console.log(sentencia)


// objetos y metodos
console.time("medicion 1.1");
console.log("test console");
console.timeEnd("medicion 1.1");
console.timeEnd("Medicion 1");

// autoboxing

let river = "Rio de los remedios";
let caracterChar = river.charAt(0);
let caracterLenght = river.length;
let caracterSlice = river.slice(3,0)
console.log(river);
console.log(caracterChar);
console.log(caracterLenght);
console.log(caracterSlice);
