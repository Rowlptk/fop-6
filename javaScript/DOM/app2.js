// Replace element

// create element
const newHeading = document.createElement('h2');
// Add id
newHeading.id = 'task-title';
// New Text node
newHeading.appendChild(document.createTextNode('Task List'));

// Get the old heading
const oldHeading = document.getElementById('task-title');
// parent
const cardAction = document.querySelector('.card-action');

// Replace
cardAction.replaceChild(newHeading,oldHeading);

// remove element
const lis = document.querySelectorAll('li');
const list = document.querySelector('ul');

lis[0].remove();

list.remove();


console.log(newHeading);