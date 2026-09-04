// Guest List: If you could invite anyone, living or deceased, to dinner, who would you invite? Make a list that includes at least three people you’d like to invite to dinner. Then use your list to print a message to each person, inviting them to dinner.
var guests = ["Daim", "Mouzzam", "Bilal", "Soban"];
var message_14 = "You are invited to a dinner ";
for (var i = 0; i < guests.length; i++) {
    var element = guests[i];
    console.log(message_14 + element + ".");
}
