// Changing Guest List: You just heard that one of your guests can’t make the dinner, so you need to send out a new set of invitations. You’ll have to think of someone else to invite.
// • Start with your program from Exercise 14. Add a print statement at the end of your program stating the name of the guest who can’t make it.
// • Modify your list, replacing the name of the guest who can’t make it with the name of the new person you are inviting.
// • Print a second set of invitation messages, one for each person who is still in your list.
// Progam 14
var guests_15 = ["Daim", "Mouzzam", "Bilal", "Soban"];
var message_15 = "You are invited to a dinner ";
for (var i = 0; i < guests_15.length; i++) {
    var element = guests_15[i];
    console.log(message_15 + element + ".");
}
console.log('\n');
console.log("Soban can't make it to the dinner");
console.log('\n');
guests_15.pop();
for (var i = 0; i < guests_15.length; i++) {
    var element = guests_15[i];
    console.log(message_15 + element + ".");
}
