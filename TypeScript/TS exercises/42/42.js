// Great Magicians: Start with a copy of your program from Exercise 39. Write a function called make_great() that modifies the array of magicians by adding the phrase the Great to each magician’s name. Call show_magicians() to see that the list has actually been modified.
var magicians_42 = ["Joe", "Harry", "Cid", "Norman", "Peter"];
var show_magicians_42 = function (arr) {
    for (var i = 0; i < arr.length; i++) {
        var e = arr[i];
        console.log(e);
    }
};
var make_great = function (arr) {
    for (var i = 0; i < arr.length; i++) {
        arr[i] = "The Great " + arr[i];
    }
};
make_great(magicians_42);
show_magicians_42(magicians_42);
