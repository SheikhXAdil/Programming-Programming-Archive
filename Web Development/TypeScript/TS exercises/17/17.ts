// Shrinking Guest List: You just found out that your new dinner table won’t arrive in time for the dinner, and you have space for only two guests.
// • Start with your program from Exercise 16. Add a new line that prints a message saying that you can invite only two people for dinner.

// • Remove guests from your list one at a time until only two names remain in your list. Each time you pop a name from your list, print a message to that person letting them know you’re sorry you can’t invite them to dinner.

// • Print a message to each of the two people still on your list, letting them know they’re still invited.

// • Remove the last two names from your list, so you have an empty list. Print your list to make sure you actually have an empty list at the end of your program.



// Program 16
const guests_17:string[] = ["Daim", "Mouzzam", "Bilal", "Soban"]

let message_17:string = "You are invited to a dinner "

for (let i = 0; i < guests_17.length; i++) {
    const element = guests_17[i];
    console.log(message_17 + element + ".")
}

console.log('\n')
console.log("Soban can't make it to the dinner")
console.log('\n')

guests_17.pop()

for (let i = 0; i < guests_17.length; i++) {
    const element = guests_17[i];
    console.log(message_17 + element + ".")
}

console.log('\n')
console.log("I have found a bigger table so i'm inviting more people")
console.log('\n')

guests_17.push('Muneeb')
guests_17.unshift('Moaz')
guests_17.splice(3, 0, 'Rafay');

for (let i = 0; i < guests_17.length; i++) {
    const element = guests_17[i];
    console.log(message_17 + element + ".")
}

// Start of program 17

console.log('\n')
console.log('I can only invite two guests now.')
console.log('\n')

for (let i = 0; i < guests_17.length-2; i++) {
    console.log("Sorry, I can't invite you to dinner " + guests_17[i])
}

for (let i = 0; i < guests_17.length+1; i++) {
    guests_17.shift()
}


console.log('\n')

for (let i = 0; i < guests_17.length; i++) {
    const element = guests_17[i];
    console.log(message_17 + element + ".")
}

guests_17.pop()
guests_17.pop()

console.log(guests_17)