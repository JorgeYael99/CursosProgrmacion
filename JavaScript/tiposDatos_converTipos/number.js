// Se manda a llamar variables numbers

const year = 1991;
let delayInSeconds = 0.00016;
let area = (16 * 3.14);
let halfArea=area/2;

// se manda a llamar a pantalla
console.log(year);
console.log(typeof year);

console.log(area);
console.log(halfArea);

//  lietrales con prefijos apropiados - hexadecimal, binario, potencias
console.log("==========lietrales con prefijos apropiados - hexadecimal, binario, potencias=============")

let a = 10; //decimal default
let b = 0x10; //hexadecimal
let c = 0o10; // octal
let d = 0b10; //binary

console.log("DECIMAL DEFAULT:",a);
console.log("HEXADECIMAL:",b);
console.log("OCTAL:",c);
console.log("BINARY:",d);

let x = 9e2;
let y = 123e-5;

console.log("POTENCIA:",x)
console.log("POTENCIA 2:",y)

// 3 valores especiales adicionales "infinity, -infinity, NaN"
console.log("=====3 valores especiales adicionales \"infinity, -infinity, NaN\"=====")

let aa = 1/0;
let ab = -Infinity;

console.log(aa);
console.log(ab);
console.log(typeof aa);
console.log(typeof ab);

let s = "it's definitely not a number";
let n = s*10;
console.log(n);
console.log(typeof n);