// Dinner Guests: Working with one of the programs from Exercises 14 through 18, print a message indicating the number of people you are inviting to dinner.
//  Program 15
var guests_19 = ["Daim", "Mouzzam", "Bilal", "Soban"];
var message_19 = "You are invited to a dinner ";
for (var i = 0; i < guests_19.length; i++) {
    var element = guests_19[i];
    console.log(message_19 + element + ".");
}
console.log('\n');
console.log("Soban can't make it to the dinner");
console.log('\n');
guests_19.pop();
for (var i = 0; i < guests_19.length; i++) {
    var element = guests_19[i];
    console.log(message_19 + element + ".");
}
console.log("Number of guests invited are: " + (guests_19.length));
