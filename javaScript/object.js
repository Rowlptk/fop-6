const person = {
    firstName : 'Steve',
    lastName : 'Smith',
    age : 36,
    email : 'steve@aol.com',
    hobbies : ['music', 'sports'],
    address : {
        city : 'Miami',
        state : 'FL'
    },
    getBirthYear: function() {
        return 2020 - this.age;
    }
}

let val;

val = person;
// get specific value;
val = person.firstName;
val = person['lastName'];
val = person.age;
val = person.hobbies[1];
val = person.address.state;
val = person.address['city'];
val = person.getBirthYear();


document.body.innerHTML = val;
console.log(val);