let val;

const today = new Date();
let birthday = new Date('9-10-1981 11:25:00');
birthday = new Date('September 10 1981');
birthday = new Date('9/10/1981');
birthday = new Date(1981, 08, 10, 11, 25, 58, 700);
// birthday = new Date(-10000000000000);

val = birthday;

val = today.getMonth() + 1;
val = today.getDate();
val = today.getDay() + 1;
val = today.getFullYear();
val = today.getHours();
val = today.getMinutes();
val = today.getSeconds();
val = today.getMilliseconds();
val = today.getTime();

birthday.setMonth(2);


console.log(birthday);
console.log(val);


const id = 100;
// EQUAL TO VALUE & TYPE
if(id === '100'){
  console.log('CORRECT');
} else {
  console.log('INCORRECT');
}


