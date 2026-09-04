// Your Own Array: Think of your favorite mode of transportation, such as a motorcycle or a car, and make a list that stores several examples. Use your list to print a series of statements about these items, such as “I would like to own a Honda motorcycle.”
var transportation = ["motorcycle", "car", "bicycle", "jeep"];
var message_13 = 'I would like to own a ';
for (var i = 0; i < transportation.length; i++) {
    var element = transportation[i];
    console.log(message_13 + element + ".");
}
