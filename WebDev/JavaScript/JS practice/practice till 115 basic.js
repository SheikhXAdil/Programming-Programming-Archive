
// Display odd numbers
// for (let i = 1; i < 10; i++) {
//     if (i%2 !== 0) {
//         console.log(i)
//     }
// }


//Display Table of any number till multiple of 10
// function table(e) {
//     for (let i = 1; i < 11; i++) {
//         let newp = document.createElement("p");
//         newp.innerHTML = i * e
//         document.getElementById("tables").append(newp)
//     }    

// }

// tables(22)

//  Display Table of any number till multiple of 10 and in negative
// function table(e) {
//     for (let i = -10; i < 11; i++) {
//         // if (i === 0) {
//         //     continue
//         // }     (to not display zero)
//         let newp = document.createElement("p");
//         newp.innerHTML = i * e
//         document.getElementById("tables").append(newp)
// }
// }

// tables(22)


// Function to display table of any number typed till any multiple
let button = document.querySelector("#table-btn")
button.addEventListener("click", function () {
    let multiple = document.querySelector("#table-till").value
    let e = document.querySelector("#table-number").value
    for (let i = 1; i <= multiple; i++) {
        let newp2 = document.createElement("p");
        newp2.innerHTML = (i * e) + "<br>"
        document.getElementById("table-answer").appendChild(newp2)
    }
})

// array sorting
let arr = [2, 5, 6, 8, 4, 1, 3, 10, 7, 9];
let arrasc = arr.sort((a, b) => a - b)
// console.log(arrasc)
let arrdes = arr.sort((a, b) => b - a)
// console.log(arrdes)

// sum of array
// console.log(arr.reduce((a, b) => a-b, 0))

// meter to kilometer
function tokilometer(e) {
    return e / 1000 + " km"
}
// console.log(tokilometer(2500))

//  to reverse values of array
let arr2 = [1, 2, 3, 4, 5]
let sort = arr2.sort()
let reverse = arr2.reverse()
// console.log(reverse)

// sum of two numbers
function sum(i, o) {
    return i + o
}
// console.log(sum(34,45))

// area of tringle
function triangle_area(b, h) {
    return (1 / 2) * b * h
}
// console.log(triangle_area(3,4))

// age in seconds
function ageinseconds(age) {
    return age * 3.154e+7
}
// console.log(ageinseconds(18))

// string addition
function addsomething(e) {
    return "something " + `${e}`
}
// console.log(addsomething("nice"))

// adds next number in array everytime
function addinarray(a) {
    let a1 = a + 1
    let arr3 = [];
    for (let i = 1; i < a1; i++) {
        arr3.push(i)
        console.log(arr3)
    }
}
// console.log(addinarray(10))

//  AND operation
function and(a, b) {
    if (a < 10 && b < 10) {
        return true
    }
    else {
        return false
    }
}
// console.log(and(5,4))
// console.log(and(7,11))

// sum of numbers till 10
var sum = 0
for (let i = 0; i <= 10; i++) {
    sum += i;
}
// console.log(sum)

// factorial of a number
// let fac = 1
// for (let i = 1; i <= 5; i++) {
//     fac *= i;
// }
// console.log(fac)


let button2 = document.querySelector("#factorial-btn");
button2.addEventListener("click", function () {
    let fac = 1;
    let factorial = document.querySelector("#factorial-number").value;
    for (let i = 1; i <= factorial; i++) {
        fac *= i;
    }
    document.querySelector("#factorial-answer").innerHTML = fac
})

// window.print()

// leap year check
function leapyearcheck(year) {
    if (year % 4 == 0) {
        console.log(`The Year ${year} is a Leap Year`)
    }
    else {
        console.log(`The Year ${year} is not a Leap Year`)
    }
}

// leapyearcheck(2017)


//  Find days left till a specific date
let button3 = document.querySelector("#daysleft-btn")
document.querySelector("#date").value = "2022-08-19";

button3.addEventListener("click", function () {

    let date = new Date();
    let date_given = document.querySelector("#date").value;
    let date_wanted = new Date(date_given)
    let oneday = 1000 * 60 * 60 * 24
    let days_left = Math.ceil((date_wanted.getTime() - date.getTime()) / oneday)

    document.querySelector("#days-left").innerHTML = days_left + " days left till " + date_given

    if (date_wanted = "") {
        document.querySelector("#days-left").innerHTML = "Select a date please"
    }
})

//  Find Greatest value
function biggestvalue(x, y, z) {
    max_val = 0;
    if (x > y && x > z) {
        max_val = x
    }
    else if (y > x && y > z) {
        max_val = y
    }
    else {
        max_val = z
    }
    return max_val
}
// console.log(biggestvalue(3,2,1))
// console.log(biggestvalue(333,555,111))
// console.log(biggestvalue(333,200,1000))


// Examination grading
function grader(sub1, sub2, sub3, sub4, sub5, sub6) {
    let obtained_marks = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
    let total_marks = 600;
    let Grade
    let pass
    if (total_marks - obtained_marks < 60) {
        Grade = "A+";
        pass = "Pass"
    }
    else if (total_marks - obtained_marks < 120) {
        Grade = "A";
        pass = "Pass"
    }

    else if (total_marks - obtained_marks > 120) {
        Grade = "F";
        pass = "Fail"
    }

    let result = "Marks Obtained in each subject" + "<br/>" + sub1 + "<br/>" + sub2 + "<br/>" + sub3 + "<br/>" + sub4 + "<br/>" + sub5 + "<br/>" + sub6 + "<br/>" + "Total Marks obtained: " + obtained_marks + "<br/>" + "Total Marks: " + total_marks + "<br/>" + "Grade: " + Grade + "<br/>" + pass

    document.querySelector("#result").innerHTML = result
}
// grader(91,98,97,92,94,99);
// // grader(81,78,87,92,74,99);
// // grader(21,48,67,52,34,69);


// find largest number of array and set others the same
function maxval(num) {
    let maxval;
    if (num[0] > num[1] && num[0] > num[2]) {
        let maxval = num[0]
        num[1] = maxval
        num[2] = maxval
    }
    else if (num[1] > num[0] && num[1] > num[2]) {
        let maxval = num[1]
        num[0] = maxval
        num[2] = maxval
    }
    else if (num[2] > num[0] && num[2] > num[1]) {
        let maxval = num[2]
        num[0] = maxval
        num[1] = maxval
    }

    return num

}

// console.log(maxval([4,3,2]))
// console.log(maxval([45,344,23]))
// console.log(maxval([456,34,2000]))

// add digits of a number
function add_digits(a) {
    let a_string = a.toString()
    let a1 = a_string.charAt(0)
    let a2 = a_string.charAt(1)
    let a1num = Number(a1);
    let a2num = Number(a2);
    let added = a1num + a2num
    console.log(added)
}

// add_digits(23)
// add_digits(78)
// add_digits(98)

function add_two_digits(n) {
    return n % 10 + Math.floor(n / 10);
}
// console.log(add_two_digits(78))
// console.log(add_two_digits(34))


// REPLACE EVERY LETTER WITH THE NEXT OF IT
function nextletter(str) {
    let strArray = [];
    for (let i = 0; i < str.length; i++) {
        strArray[i] = String.fromCharCode(str.charCodeAt(i) + 1);
    }
    return strArray.join("");
}
// console.log(nextletter("hello"))

// getting first half of string
function halfstring(str) {
    let halfstring = str.length / 2;
    str = str.substring(0, halfstring);
    return str;
}
// console.log(halfstring("python"))

// join strings but without thier first word
function withoutfirstletter(str1, str2) {
    str1 = str1.substring(1)
    str2 = str2.substring(1)
    return str1 + " " + str2
}
// console.log(withoutfirstletter("hhello", "wworld"))


// if length of strings equal then join if one has more then reduce it
function equalstring(str1, str2) {
    if (str1.length == str2.length) {
        return str1.concat(" ", str2)
    }
    else if (str1.length > str2.length) {
        let str2length = str2.length
        str1 = str1.substring(0, str2length)
        return str1.concat(" ", str2)
    }
    else if (str2.length > str1.length) {
        let str1length = str1.length
        str2 = str2.substring(0, str1length)
        return str1.concat(" ", str2)
    }
}
// console.log(equalstring("Hello", "Helloo0000"))
// console.log(equalstring("Hello00000", "Hello"))
// console.log(equalstring("world", "world"))


// divide array in two parts which contain even and odd elements respectively and return sum of elements of both arrasy in separate array
function twoparts(arr) {
    let firstpart = [];
    let secondpart = [];
    for (let i = 0; i < arr.length; i++) {
        const element = arr[i];
        if (i % 2 == 0) {
            firstpart.push(element)
        } else {
            secondpart.push(element)
        }
    }
    let firstsum = 0;
    let secondsum = 0;

    for (let first = 0; first < firstpart.length; first++) {
        const first_elements = firstpart[first];
        firstsum += first_elements;
    }
    for (let second = 0; second < secondpart.length; second++) {
        const second_elements = secondpart[second];
        secondsum += second_elements;
    }
    let sumarray = [firstsum, secondsum]

    return firstpart + " " + secondpart + " " + sumarray
}

// console.log(twoparts([1,1,2,2,3,3]))


// print pyramid
function paramid(v, n) {
    for (let i = 1; i <= n; i++) {
        let str1 = " ".repeat(n - i);
        let str2 = `${v}`.repeat(i * 2 - 1)
        console.log(str1 + str2 + str1)
    }
}
//   paramid(3,7)



//  sum numbers in a range
function sumAll(arr) {
    let newArr = []
    if (arr[1] > arr[0]) {
        arr = arr.reverse() 
        for (let i = arr[1]; i <= arr[0] ;i++) {
            newArr.push(i)
        } 
    } else if(arr[0] > arr[1]) {
        for (let i = arr[1]; i <= arr[0] ;i++) {
            newArr.push(i)
    }
}
    return newArr.reduce((a,b) => a+b)
  }
  //   console.log(sumAll([5, 10]));
  
// intersection of arrays   
  function diffArray(arr1, arr2) {
    return arr1
    .concat(arr2)
    .filter(item => !arr1.includes(item) || !arr2.includes(item));
}
//  console.log( diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]));

// returns kth greatest number of array
let kth_greatest = (arr, k) => {
    arr.sort((a, b) => b - a);
    let number = k - 1;
    return `The ${k}th greatest number is ${arr[number]}`;
}
// console.log(kth_greatest([1,4,3,5,2,6], 3))
  
  
// maximum difference between any two adjacent elements
let maximum_difference = (arr) => {
    let result = 0;
    for (let i = 0; i < arr.length - 1; i++) {
        let difference = arr[i] - arr[i+1];  
        if (difference < result) {
            result = difference
        }
    }
    if (result < 0) {
        result = result * -1
    }
    return result
}
console.log(maximum_difference([1,2,3,8,9]))

//  116