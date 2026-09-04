// Great Magicians: Start with a copy of your program from Exercise 39. Write a function called make_great() that modifies the array of magicians by adding the phrase the Great to each magician’s name. Call show_magicians() to see that the list has actually been modified.


let magicians_42:string[] = ["Joe", "Harry", "Cid", "Norman", "Peter"]

let show_magicians_42 = (arr:string[]) => {
    for (let i = 0; i < arr.length; i++) {
        const e = arr[i];
        console.log(e)
    }
}



let make_great = (arr:string[]) => {
    for (let i = 0; i < arr.length; i++) {
        arr[i] = "The Great " + arr[i]
    }
}

make_great(magicians_42)
show_magicians_42(magicians_42)