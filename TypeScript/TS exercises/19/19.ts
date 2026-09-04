// Dinner Guests: Working with one of the programs from Exercises 14 through 18, print a message indicating the number of people you are inviting to dinner.

//  Program 15
const guests_19:string[] = ["Daim", "Mouzzam", "Bilal", "Soban"]

let message_19:string = "You are invited to a dinner "

for (let i = 0; i < guests_19.length; i++) {
    const element = guests_19[i];
    console.log(message_19 + element + ".")
}

console.log('\n')
console.log("Soban can't make it to the dinner")
console.log('\n')

guests_19.pop()

for (let i = 0; i < guests_19.length; i++) {
    const element = guests_19[i];
    console.log(message_19 + element + ".")
}

console.log("Number of guests invited are: " + (guests_19.length))