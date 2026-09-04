"use strict";
// compare two objects to see if the keys are equilent
const objectCompare = (obj, compareObj) => {
    return (JSON.stringify(obj) === JSON.stringify(compareObj));
};
// console.log(objectCompare({ age: 25, hair: 'long', beard: true }, { age: 25, hair: 'long', beard: true })); // true
// console.log(objectCompare({ hair: 'long', beard: true }, { age: 25, hair: 'long', beard: true })); // false
// filter the specified string from an array of string
const itemFilter = (arr, ...args) => {
    arr = arr.filter((str) => {
        return !args.includes(str);
    });
    return arr;
};
// console.log(itemFilter(["a", "b", "c", "b", "d", "d", "a"], "a", "d"))
// all possible subsets/combinations of a given array of numbers
const subsets = (arr) => {
    let temp = [];
    let result = [];
    result.push(temp);
    for (let i = 0; i < arr.length; i++) {
        for (let j = i + 1; j <= arr.length; j++) {
            temp = arr.slice(i, j);
            result.push(temp);
            temp = [];
        }
    }
    result = result.sort((a, b) => a.length - b.length);
    return result;
};
// console.log(subsets([1,2,3,4,5]))
// console.log(subsets([11,14,17,32,45]))
// extract values of given indexes
const indexValExtraction = (arr, args) => {
    let result = args.map((i) => arr[i]);
    return result;
};
// console.log(indexValExtraction(["a", "b", "c", "noice", "hehe" ,"d"], [3,4]))
// console.log(indexValExtraction(["a", "b", "c", "noice", "hehe" ,"d"], [0,1]))
// generate a random hex color code
const randomHexColorCode = () => {
    let n = (Math.random() * 0xffff * 1000000).toString(16);
    return '#' + n.slice(0, 6);
};
//  console.log(randomHexColorCode()) 
//  console.log(randomHexColorCode()) 
//  sort the array of numbers according to the given argument function
const accordingReduce = (args, comparator = (a, b) => a - b) => {
    return args.reduce((a, b) => comparator(a, b) >= 0 ? b : a);
};
// console.log(accordingReduce([1,2,3]))
// console.log(accordingReduce([14,16,18], (a,b) => b-a))
// check if all values of an array of numbers obeys the given function
const accordingCheck = (args, comparator = (a) => a > 5) => {
    return args.every((a) => comparator(a));
};
// console.log(accordingCheck([1,2,3]))
// console.log(accordingCheck([14,16,18], (a) => a>5))
// split the values of two given arrays into two groups according to the given function
const accordingGrouping = (arr1, arr2, comparator = (a) => a > 5) => {
    let group1 = [];
    let group2 = [];
    arr1.map((a) => comparator(a) ? group1.push(a) : group2.push(a));
    arr2.map((a) => comparator(a) ? group1.push(a) : group2.push(a));
    console.log("The values which obey are: ", group1);
    console.log("The values which do not obey are: ", group2);
    return;
};
// console.log(accordingGrouping([1,6,8], [2,3,9]))
// console.log(accordingGrouping([21,54,6,3], [45,73,1,8,45], (a) => a>20))
// 18
