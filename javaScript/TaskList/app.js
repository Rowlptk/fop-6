// materializecss.com

// Define UI vars
const form = document.querySelector('#task-form');
const taskInput = document.querySelector('#task');
const filter = document.querySelector('#filter');
const clearBtn = document.querySelector('.clear-tasks');
const taskList = document.querySelector('.collection');

// call all event listeners
loadEventListeners();

// Load all event Listeners
function loadEventListeners() {
    form.addEventListener('submit', addTask);
}

// Add Task
function addTask(e){
    if(taskInput.value === '') {
        alert('Add a task');
    }
    else{
        // create li
        const li = document.createElement('li');
        // Add class
        li.className = 'collection-item';
        // Create text
        const text = document.createTextNode(taskInput.value);
        li.appendChild(text);
        // li.appendChild(document.createTextNode(taskInput.value));

        // create link
        const link = document.createElement('a');
        // Add class
        link.className = 'delete-item secondary-content';
        // Add icon html
        link.innerHTML = '<i class="fa fa-remove"></i>';

        //  Append link
        li.appendChild(link);

        // Appen li to ul;
        taskList.appendChild(li);

        // console.log(li);
        // console.log(text);
        // console.log(link);

    }
    e.preventDefault();
}