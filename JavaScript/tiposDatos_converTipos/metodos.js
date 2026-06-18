let  str  =  "java  script  language"; // Declara una variable con un string (texto)
   
console.log(str.length);  //  ->  20 - property: Devuelve la cantidad de caracteres del string (incluye espacios)
console.log('test'.length);  //  ->  4 - property: Devuelve la cantidad de caracteres de 'test'
   
console.log(str.charAt(0));  //  ->  'j' - method: Devuelve el carácter en la posición 0 (primer carácter)
console.log('abc'.charAt(1));  //  ->  'b' - method: Devuelve el carácter en la posición 1 (segundo carácter)
   
console.log(str.slice(0,  4));  //  ->  'java' - method: Extrae caracteres desde posición 0 hasta la 4 (sin incluirla)
console.log('test'.slice(1,  3));  //  ->  'es' - method: Extrae caracteres desde posición 1 hasta la 3 (sin incluirla)
   
console.log(str.split('  '));  //  ->  ['java',  'script', 'language'] - method: Divide el string en un array usando los espacios como separador
console.log('192.168.1.1'.split('.'));    //  ->  ['192',  '168',  '1', '1'] - method: Divide el string en un array usando el punto como separador
console.log('HOLA COMO HAS ESTADO'.split(' ').slice(2))
