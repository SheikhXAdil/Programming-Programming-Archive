// More Conditional Tests: You don’t have to limit the number of tests you create to 10. If you want to try more comparisons, write more tests. Have at least one True and one False result for each of the following:
// • Tests for equality and inequality with strings

// • Tests using the lower case function

// • Numerical tests involving equality and inequality, greater than and less than, greater than or equal to, and less than or equal to

// • Tests using "and" and "or" operators

// • Test whether an item is in a array

// • Test whether an item is not in a array

let stringEquality = (str1:string, str2:string):boolean => {
    return (str1 === str2)
}

let caseEquality = (str1:string, str2:string):boolean => {
    return (str1.toLowerCase() === str2.toLowerCase())
}

let numberEquality = (num1:number, num2:number):boolean => {
    return (num1 === num2)
}
let numberInequality = (num1:number, num2:number):boolean => {
    return (num1 !== num2)
}
let numberGreater = (num1:number, num2:number):boolean => {
    return (num1 >= num2)
}
let numberSmaller = (num1:number, num2:number):boolean => {
    return (num1 <= num2)
}

let andEquality = (num1:number, num2:number):boolean => {
    return (num1 > 10 && num2 > 10)
}

let orEquality = (num1:number, num2:number):boolean => {
    return (num1 > 10 || num2 > 10)
}

let arrayNotItem = (arr:number[]):boolean => {
    return (arr.indexOf(1) !== -1)
}

let arrayItem = (arr:number[]):boolean => {
    return (!(arr.indexOf(6) !== -1))
}

console.log(stringEquality("aaa","aaa"))
console.log(stringEquality("aaa","aaaa"))

console.log(caseEquality("AaAa","aAaa"))
console.log(caseEquality("AaAa","aAaaa"))

console.log(numberEquality(1,1))
console.log(numberEquality(1,2))

console.log(numberInequality(1,2))
console.log(numberInequality(1,1))

console.log(numberGreater(3,1))
console.log(numberGreater(3,5))

console.log(numberSmaller(4,6))
console.log(numberSmaller(8,6))

console.log(andEquality(11,12))
console.log(andEquality(1,4))

console.log(orEquality(11,7))
console.log(orEquality(1,4))

console.log(arrayItem([1,2,3,4,5]))
console.log(arrayItem([2,3,4,5,6]))

console.log(arrayNotItem([1,2,3,4,5]))
console.log(arrayNotItem([2,3,4,5,6]))
