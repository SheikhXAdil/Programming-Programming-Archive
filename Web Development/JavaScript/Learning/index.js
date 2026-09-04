// // console.time("your code took")
// // console.log(44);
// // console.table({name:"adil", age:18});
// // console.warn("this is a warning")
// // console.error("this is an error")
// // console.assert(23>189, "this is not possible")
// // console.timeEnd("your code took")

// // let myvar;
// // myvar = 4;
// // myvar = String(myvar)
// // console.log(myvar, typeof myvar)
// // console.log(myvar.toString())

// // let myarr;
// // myarr = String([1,2,3,4,5])
// // console.log(myarr, (typeof myarr))

// // let str1 = "345.56"
// // let str2 = true
// // str2 = Number(str2)
// // str1 = parseInt(str1)
// // str3 = parseFloat("456.43")
// // console.log(str1, str2, str3)
// // number = 4
// // // console.log(number.toFixed(4))

// // let str1 = "hello";
// // let str2 = " world";
// // let str3 = str1.concat(str2);
// // console.log(str3)
// // console.log(str3.charAt(4))
// // console.log(str3.indexOf("world"))
// // console.log(str3.substring(3,7))
// // console.log(str3.slice(-4))
// // console.log(str3.split(" "))
// // console.log(str3.includes("dfgf"))
// // console.log(str3.endsWith(str2))
// // console.log(str3.replace("hello", "hi"))

// // str4 = `<h1>${str1} my ${str2}</h1>
// //         <p>i'm back</p>`
// // document.body.innerHTML = str4

// // let age = prompt("What is your age?")
// // console.log("U can", age<18? "not drive" : "drive")

// let a = window.document
// // console.log(window.innerHeight)
// // console.log(innerWidth)
// // console.log(scrollX)
// // console.log(scrollY)
// // console.log(location.toString())
// // location.href = '//www.youtube.com'
// // a = prompt("What is your age");
// // a = confirm("Are you sure");
// // a = document.links
// // a = document.all
// a = document.scripts
// a = Array.from(a)
// a.forEach(Element => {
//     console.log(elament)  
// });
// console.log(a)
function odd(l,r) {
    let x= []
    for (let i = l+1; i < r; i++) {
        if (i%2!==0) {
            x.push(i)
        }
    }
    return x
}
odd(4,8)