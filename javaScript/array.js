// create some arrays
const numbers = [45,56,33,23,44,36,5];
const numbers2 = new Array(22,45,33,76,54);
const fruit = ['Apple', 'Banana', 'Orange', 'Pear'];
const mixed = [22,'Hello',true,undefined, null, {a:1, b:1}, new Date()];

let val;

// Get array length
val = numbers.length;
// Get value
val = numbers[2];

// insert into array
numbers[2] = 100;

// finding index
val = numbers.indexOf(44);
// const numbers = [1,2,3]


// Mutating arrays
// Add one to end
numbers.push(250);
// Add one to front
numbers.unshift(120);
// Take off from end
numbers.pop();
// Take off from front
numbers.shift();
// Splice
numbers.splice(2,1);
// Add
// arr.splice(index, 0, item); will insert item into arr at the specified index (deleting 0 items first, that is, it's just an insert).
numbers.splice(3,0,900);




document.body.innerHTML = numbers;