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
    // DOM Load event
    document.addEventListener('DOMContentLoaded', getTasks);
    // Add task event
    form.addEventListener('submit', addTask);
    // Remove task event
    taskList.addEventListener('click', removeTask);
    // Clear task event
    clearBtn.addEventListener('click', clearTasks);
    // filter tasks
    filter.addEventListener('keyup', filterTasks);
}





// get tasks from LS
function getTasks() {
    let tasks;
    if(localStorage.getItem('tasks') === null) {
        tasks = [];
    } else {
        tasks = JSON.parse(localStorage.getItem('tasks'));
    } 

    tasks.forEach(function(task) {
         // create li
         const li = document.createElement('li');
         // Add class
         li.className = 'collection-item';
         // Create text
         const text = document.createTextNode(task);
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
    })
}



// Filter Tasks
function filterTasks(e){
    const text = e.target.value.toLowerCase();

    const li = document.querySelectorAll('.collection-item');
    li.forEach(function(task) {
        const item = task.firstChild.textContent;
        if(item.toLowerCase().indexOf(text) != -1) {
            task.style.display = 'block';
        }
        else
        {
            task.style.display = 'none';
        }
    })
}

// Clear Tasks
function clearTasks(){
    taskList.innerHTML = '';
    clearTasksFromLocalStorage();
}

// clear Tasks from LS
function clearTasksFromLocalStorage() {
    localStorage.clear();
}

// Remove Task
function removeTask(e) {
    if(e.target.parentElement.classList.contains('delete-item')){
        if(confirm('Are You Sure?')) {
            e.target.parentElement.parentElement.remove();

            // remove from ls
            removeTaskFromLocalStorage(e.target.parentElement.parentElement);
        }
    }  
}

// Remove from LS
function removeTaskFromLocalStorage(taskItem){
    let tasks;
    if(localStorage.getItem('tasks') === null)
    {
        tasks = [];
    }else {
        tasks = JSON.parse(localStorage.getItem('tasks'));
    }

    tasks.forEach(function(task, index){
        if(taskItem.textContent === task) {
            tasks.splice(index,1);
        }
    });

    localStorage.setItem('tasks', JSON.stringify(tasks));
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
        
        // Store in LS
        storeTaskInLocalStorage(taskInput.value);
    }
    // Clear Input
    taskInput.value = '';

    e.preventDefault();
}

// store task in LS
function storeTaskInLocalStorage(task)
{
    let tasks;
    if(localStorage.getItem('tasks') === null) {
        tasks = [];
    }
    else{
        tasks = JSON.parse(localStorage.getItem('tasks'));
    }

    tasks.push(task);

    localStorage.setItem('tasks', JSON.stringify(tasks));
}