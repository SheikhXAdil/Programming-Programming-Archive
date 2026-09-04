// 1. Ways to print in Javascript
console.log("Hello World", 4 * 8, "Another log");
// alert("Me");
// document.write("This is document write");

// 2. Javascript console API
console.log("console log");
console.warn("This is a warning");
console.error("This is a error");

/*
multi
line
comment
*/

// 3. Javascript variables
// What are variables? containers to store data values
var number1 = 42;
var number2 = 56;
console.log(number1 - number2);

// 4. Data types in Javascript

// number
var number1 = 42;
var number2 = 56;

//string
var str1 = "This is a srting";
var str2 = "This is another srting";

//object
var marks = {
    Ahsan : 89,
    Adil : 98,
    Daim : 94,
}
console.log(marks)

// Booleans
var a1 = true;
var b2 = false;
console.log(a1, b2)

var und; //undefined variable
console.log(und);

var n = null;
console.log(null);

/*
Two Types of data types
1. Primitive; umdefined, null, boolean, string, number, symbol
2. Refrence; arrays, object


var arr = [1,2,3,"Anime",5];
console.log(arr);
console.log(arr[3]);
console.log(arr[2]);
*/

//Operators in Javascript
// Aritmatic Operators

var a = 20;
var b = 30;
console.log("a + b =", a+b);
console.log("a - b =", a-b);
console.log("a * b =", a*b);
console.log("a / b =", a/b);

//assignment operators
var c = a;
//c+=20;
//c-=20;
//c*=20;
//c/=20;
console.log(c);

//comparison operators
console.log(a == b);
console.log(a >= b);
console.log(a <= b);

//logical operators
//and &&
//or ||
//not !

//Function in Javascript
// DRY = Do Not Repeat Yourself
function avg(a,b){
    return (a+b)/2;
}

c1 = avg(4,6);
c2 = avg(23,45);
console.log(c1, c2);

// conditionals in javascript

var age = 23;
// single if statement
if (age > 18){
    console.log("You are not a kid anymore");
}
// if else statement
if (age > 18){
    console.log("You are not a kid anymore");
}
else {
    console.log("You are a kid");
}
// if else ladder
if (age > 32){
    console.log("You are not a kid anymore");
}
else if(age > 25){
    console.log("be better kid")
}
else if(age > 22){
    console.log("grow up kid")
}
else if(age > 20){
    console.log("don't be a kid")
}
else if(age > 18){
    console.log("you are still a kid")
}
else {
    console.log("You are a kid");
}
console.log("End of ladder");

// Loops in javascript

 var arr = [1, 2, 3, 4, 5, 6, 7];
  for(var i=0; i<arr.length; i++){
      console.log(arr[i]);
  }

  for(var i=0; i<arr.length; i++){
     if(i==1){
         break;
     }
      console.log(arr[i]);
  }

 for(var i=0; i<arr.length; i++){
    if(1==2){
        continue;
    }
     console.log(arr[i]);
 }

 arr.forEach(function(element){
     console.log(element)
 })

 var j = 0;

 while(j<arr.length){
     console.log(arr[j]);
     j++;
 }

 do {
     console.log(arr[j]);
     j++;
 } while (j < arr.length);

 var myarr = ["Hair", "string", 32, 45, null, false];
 
 // Array Methods


 //String methods


 //Dates in Js

 let mydate = new Date();
 console.log(mydate);
 console.log(mydate.getMinutes());

 //DOM Manupilatiom

 let elem = document.getElementById("click");
 console.log(elem);

 let elemclass = document.getElementsByClassName("container");
 console.log(elemclass);
 elemclass[1].style.background = "orange";
 elemclass[0].classList.add ("bg-primary");
 
 console.log(elemclass[1].innerHTML);
 console.log(elemclass[1].innerText);

 tn = document.getElementsByTagName("div");
 console.log(tn);
 create = document.createElement("p");
 create.innerText = "This is a created para";
 tn[0].appendChild(create);
 create2 = document.createElement('b');
 create2.innerText = "This is a created bold";
 tn[0].replaceChild(create2, create);

sep = document.querySelector(".container");
console.log(sep);
sep2 = document.querySelectorAll(".container");
console.log(sep2);

// Events in Js

// function Clicked(){
//     document.querySelectorAll(".container")[1].innerHTML = "<b>We clicked</b>";
//     console.log("The Button Was Clicked");
// }

function mouse(){
    console.log("Mouse is on me");
}

window.onload = function(){
    console.log("thw document was loaded");
}
firstcontainer.addEventListener('click', function(){
    console.log("The container was clicked");
})

firstcontainer.addEventListener('mouseout', function(){
    console.log("The mouse is out");
})

let previous = document.querySelectorAll(".container")[1].innerHTML
firstcontainer.addEventListener('mouseup', function(){
    document.querySelectorAll(".container")[1].innerHTML = previous
    console.log("The mouse left");
})
firstcontainer.addEventListener('mousedown', function(){
    document.querySelectorAll(".container")[1].innerHTML = "<b>We clicked</b>";
    console.log("The mouse is down");
})

//arrow functions
Summ = (a,b)=>{
    return a+b;
}
//settimeout and setinterval
clr = setTimeout(() => {
    document.querySelectorAll(".container")[1].innerHTML = "<b>We clicked</b>";
}, 3000);

clr2 = setInterval(() => {
    console.log("Set Interval Fired")
}, 2000);

clearTimeout(clr);
clearInterval(clr2);
// clearTimeout(clr);
// clearInterval(clr2);
// use to clear timeout

//Local Storage in Js
localStorage.setItem("name", "adil");
console.log(localStorage.getItem("name"))
// localStorage.clear;
// localStorage.removeItem;

//JSON
