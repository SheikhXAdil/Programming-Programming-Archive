// Magicians: Make a array of magician’s names. Pass the array to a function called show_magicians(), which prints the name of each magician in the array.


let magicians:string[] = ["Joe", "Harry", "Cid", "Norman", "Peter"]

let show_magicians = (arr:string[]) => {
    for (let i = 0; i < arr.length; i++) {
        const e = arr[i];
        console.log(e)
    }
}

show_magicians(magicians)