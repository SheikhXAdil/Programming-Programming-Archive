// T-Shirt: Write a function called make_shirt() that accepts a size and the text of a message that should be printed on the shirt. The function should print a sentence summarizing the size of the shirt and the message printed on it. Call the function.

let make_shirt = (size:string, text:string) => {
    console.log("Your shirt size is " + size + "and the Text on it is " + "'" + text + "'")
}

make_shirt("small", "I love Ts")
make_shirt("medium", "I love Ts")
make_shirt("large", "I love Ts")