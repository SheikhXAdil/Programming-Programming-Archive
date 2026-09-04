// More Guests: You just found a bigger dinner table, so now more space is available. Think of three more guests to invite to dinner.
// • Start with your program from Exercise 15. Add a print statement to the end of your program informing people that you found a bigger dinner table.

// • Add one new guest to the beginning of your array.

// • Add one new guest to the middle of your array. • Use append() to add one new guest to the end of your list. • Print a new set of invitation messages, one for each person in your list.


// Program 15
const guests_16:string[] = ["Daim", "Mouzzam", "Bilal", "Soban"]

let message_16:string = "You are invited to a dinner "

for (let i = 0; i < guests_16.length; i++) {
    const element = guests_16[i];
    console.log(message_16 + element + ".")
}

console.log('\n')
console.log("Soban can't make it to the dinner")
console.log('\n')

guests_16.pop()

for (let i = 0; i < guests_16.length; i++) {
    const element = guests_16[i];
    console.log(message_16 + element + ".")
}

// Start of program 16
console.log('\n')
console.log("I have found a bigger table so i'm inviting more people")
console.log('\n')

guests_16.push('Muneeb')
guests_16.unshift('Moaz')
guests_16.splice(3, 0, 'Rafay');

for (let i = 0; i < guests_16.length; i++) {
    const element = guests_16[i];
    console.log(message_16 + element + ".")
}