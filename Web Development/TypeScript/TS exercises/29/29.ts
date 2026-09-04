// Favorite Fruit: Make a array of your favorite fruits, and then write a series of independent if statements that check for certain fruits in your array.
// • Make a array of your three favorite fruits and call it favorite_fruits.

// • Write five if statements. Each should check whether a certain kind of fruit is in your array. If the fruit is in your array, the if block should print a statement, such as You really like bananas!

const favorite_fruits:string[] = ["apple", "kiwi", "orange"]

function fruitCheck(arr:string[]) {
    if (arr.indexOf('apple') !== -1) {
        console.log("You must really like apple")
    }
    if (arr.indexOf('banana') !== -1) {
        console.log("You must really like banana")
    }
    if (arr.indexOf('kiwi') !== -1) {
        console.log("You must really like kiwi")
    }
    if (arr.indexOf('orange') !== -1) {
        console.log("You must really like orange")
    }
    if (arr.indexOf('lemon') !== -1) {
        console.log("You must really like lemon")
    }
}

fruitCheck(favorite_fruits)