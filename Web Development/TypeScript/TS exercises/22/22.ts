// Intentional Error: If you haven’t received an array index error in one of your programs yet, try to make one happen. Change an index in one of your programs to produce an index error. Make sure you correct the error before closing the program.


const guests_22:string[] = ["Daim", "Mouzzam", "Bilal", "Soban"]

let message_22:string = "You are invited to a dinner "

// Fixed the error
for (let i = 0; i < guests_22.length; i++) {
    const element = guests_22[i];
    console.log(message_22 + element + ".")
}