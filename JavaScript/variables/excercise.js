// Rose – unit price: 8 , quantity: 70 , value: 560
// Lily – unit price: 10 , quantity: 50 , value: 500
// Tulip – unit price: 2 , quantity: 120 , value: 240
// Total: 1300

// precios de las flores
const rosePrice = 8;
const lilyPrice = 10;
const tulipPrice = 2;
// cantidad de flores
let numberOfRose = 70;
let numberOfLily= 50;
let numberOfTulip= 120;
// Valor total de las flores cada una
let totalValueRose = rosePrice * numberOfRose;
let totalValueLily = lilyPrice * numberOfLily;
let totalValueTulip = tulipPrice * numberOfTulip;

let total = totalValueRose + totalValueLily + totalValueTulip;

console.log("Rose - Unit price:", rosePrice,", Quantity:",numberOfRose,", Value:",totalValueRose);
console.log("Lily - Unit price:", lilyPrice,", Quantity:",numberOfLily,", Value:",totalValueLily);
console.log("Tulip - Unit price:", tulipPrice,", Quantity:",numberOfTulip,", Value:",totalValueTulip)
console.log("Total:",total);