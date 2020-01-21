// document.querySelector('.clear-tasks').addEventListener('click', function(e){
//     console.log('Hello World!');

//     e.preventDefault();
// })

document.querySelector('.clear-tasks').addEventListener('click', onClick);


function onClick(e){
    // console.log('Clicked');

    let val;

    val = e;
    val = e.type;
    val = e.target;
    val = e.target.id;
    val = e.target.className;
    val = e.target.classList;
    val = e.timeStamp;
    val = e.clientX;
    val = e.clientY;

    val = e.offsetY;
    val = e.offsetX;


    console.log(val);


    e.preventDefault();
}

// click, dblclick, mouseup, mousedown, mouseenter, mouseleave, mouseover, mouseout, mousemove, keydown, keyup, keypress, focus, blur, cut, paste, input, change, submit etc..

const card = document.querySelector('.card');
const heading = document.querySelector('#task-title');

card.addEventListener('mousemove', runEvent);

function runEvent(e) {
    console.log(`EVENT TYPE: ${e.type}`);
    heading.textContent = `MouseX: ${e.offsetX} MouseY : ${e.offsetY}`;

    document.body.style.backgroundColor = `rgb(${e.offsetX}, ${e.offsetY}, 100)`;
}

// Event Delegation

//const delItem = document.querySelector('.delete-item');

//delItem.addEventListener('click', deleteItem);

document.body.addEventListener('click',deleteItem);

function deleteItem(e)
{
    if(e.target.parentElement.classList.contains('delete-item')){
        //console.log(e.target);
        e.target.parentElement.parentElement.remove();
    }
    
}