// Intentional Error: If you haven’t received an array index error in one of your programs yet, try to make one happen. Change an index in one of your programs to produce an index error. Make sure you correct the error before closing the program.
var guests_22 = ["Daim", "Mouzzam", "Bilal", "Soban"];
var message_22 = "You are invited to a dinner ";
// Fixed the error
for (var i = 0; i < guests_22.length; i++) {
    var element = guests_22[i];
    console.log(message_22 + element + ".");
}
