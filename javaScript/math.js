// console.log('x-men');

// let data = '5';

// console.log(data);
// console.log(typeof data);

// // var or let
// // const

// const pi = 3.14;

// console.log(pi);

// pi = 4;

// // number, string, boolean, null, undefined
// // array, object, function, symbol

// ----------------------------------------------------------

const num1 = 100;
const num2 = 50;
let val;

// Simple math with numbers
val = num1 + num2;
val = num1 - num2;
val = num1 * num2;
val = num1 / num2;
val = num1 % num2;
val = 4 ** 2;

// Math Object
val = Math.PI;
val = Math.E;
val = Math.round(2.5);
val = Math.ceil(2.1);
val = Math.floor(2.9);
val = Math.sqrt(64);
val = Math.abs(-3);
val = Math.pow(8,2);
val = Math.min(2,33,4,1,55,6,3,-2);
val = Math.max(2,33,4,1,55,6,3,-2);

val = Math.random();

val = Math.ceil(Math.random()*6);
val = Math.floor(Math.random()*4000 + 1);


// min ==> 0.000000001*6 ==>0.0000000006 ==> ceil
// max ==> 0.9999999999*6  ==>5.99999999999 ==> ceil

console.log(val);