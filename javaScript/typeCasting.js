let val;

// Number to string
val = String(5555);
val = String(4+4);

// Bool to String
val = String(true);

// Date to String
val = String(new Date());

// Array to string
val = String([1,2,3,4]);

// toString
val = (5).toString();
val = (true).toString();

// String to number
val = Number('5');
val = Number(true);
val = Number(false);
val = Number(null);
val = Number('ram');
val = Number([1,2,3]);

val = parseInt('100.30');
val = parseFloat('100.30');

val = "apple";
console.log(val.length);

val = 1234.5678;
console.log(val.toFixed(2));

console.log(val);
console.log(typeof val);


const val1 = String(5);
const val2 = 6;
const sum = Number(val1 + val2);

//'5' + 6 ==> '56' ==> 56
console.log(sum);

// Math Object, string methods, template literals,
// arrays, objects, date, if, switch, for