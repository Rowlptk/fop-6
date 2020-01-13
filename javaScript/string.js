const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'Hello there my name is Brad';
const tags = 'web design,web development,programming';

let val;

// Concatenation
val = firstName + lastName;
val = firstName + ' ' + lastName;

// Append
val = 'Nishan';
//val = val + 'Panta';
val += ' Panta';


val = "Hello, my name is " + firstName + ' and I am ' + age;

// Escaping
val = 'That\'s awesome, I can\'t wait';

// length
val = firstName.length;

// concat()
val = firstName.concat(' ', lastName);

// change case
val = firstName.toLowerCase();
val = firstName.toUpperCase();

// william
val = firstName[2];

// indexOf();
val = firstName.indexOf('l');
val = firstName.lastIndexOf('l');

// charAt();
val = firstName.charAt('2');
// get last char
val = firstName.charAt(firstName.length -1);

// slice();
val = firstName.slice(0,4);

val = firstName.slice(-7);


// split()
val = str.split(' ');
val = tags.split(',');

let str1 = 'brad Brad BRAD brading hello this is BrAd brad'
// replace();
val = str.replace('brad','Nishan');
val = str1.replace(/brad/gi,'Nishan');

// g ==> global match
// i ==> case insensitive match
console.log(val);

// template literals, arrays, object, date
// if, switch, loop, forEach, for/in