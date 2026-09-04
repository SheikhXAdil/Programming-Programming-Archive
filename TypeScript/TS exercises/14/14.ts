// Guest List: If you could invite anyone, living or deceased, to dinner, who would you invite? Make a list that includes at least three people you’d like to invite to dinner. Then use your list to print a message to each person, inviting them to dinner.

const guests:string[] = ["Daim", "Mouzzam", "Bilal", "Soban"]

let message_14:string = "You are invited to a dinner "

for (let i = 0; i < guests.length; i++) {
    const element = guests[i];
    console.log(message_14 + element + ".")
}