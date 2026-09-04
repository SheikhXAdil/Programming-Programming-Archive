// Unchanged Magicians: Start with your work from Exercise 40. Call the function make_great() with a copy of the array of magicians’ names. Because the original array will be unchanged, return the new array and store it in a separate array. Call show_magicians() with each array to show that you have one array of the original names and one array with the Great added to each magician’s name


let magicians_43:string[] = ["Joe", "Harry", "Cid", "Norman", "Peter"]
let newMagicians:string[] = [...magicians_43]

let show_magicians_43 = (arr:string[]) => {
    for (let i = 0; i < arr.length; i++) {
        const e = arr[i];
        console.log(e)
    }
}



let make_great_43 = (arr:string[]) => {
    for (let i = 0; i < arr.length; i++) {
        arr[i] = "The Great " + arr[i]
    }
}

make_great_43(newMagicians)
show_magicians_43(magicians_43)
console.log("\n")
show_magicians_43(newMagicians)