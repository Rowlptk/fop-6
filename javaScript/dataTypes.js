// Primitive

// undefined
let data;

// String
data = 'John Doe';

// Number
data = 45.2;

// Boolean
data = false;

// Null
data = null;

// Symbol
data = Symbol();


// Reference types
// array
data = ['movies', 'music'];

// Object literals
data = {
    city: 'Boston',
    state: 'MA'
}

// Date Object ==> inbuilt Object
data = new Date();

// function 
data = function(){
    alert("Hello");
}

console.log(data());
console.log(typeof data);