// Magicians: Make a array of magician’s names. Pass the array to a function called show_magicians(), which prints the name of each magician in the array.
var magicians = ["Joe", "Harry", "Cid", "Norman", "Peter"];
var show_magicians = function (arr) {
    for (var i = 0; i < arr.length; i++) {
        var e = arr[i];
        console.log(e);
    }
};
show_magicians(magicians);
