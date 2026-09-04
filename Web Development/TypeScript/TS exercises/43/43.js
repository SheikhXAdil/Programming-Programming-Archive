// Unchanged Magicians: Start with your work from Exercise 40. Call the function make_great() with a copy of the array of magicians’ names. Because the original array will be unchanged, return the new array and store it in a separate array. Call show_magicians() with each array to show that you have one array of the original names and one array with the Great added to each magician’s name
var __spreadArray = (this && this.__spreadArray) || function (to, from, pack) {
    if (pack || arguments.length === 2) for (var i = 0, l = from.length, ar; i < l; i++) {
        if (ar || !(i in from)) {
            if (!ar) ar = Array.prototype.slice.call(from, 0, i);
            ar[i] = from[i];
        }
    }
    return to.concat(ar || Array.prototype.slice.call(from));
};
var magicians_43 = ["Joe", "Harry", "Cid", "Norman", "Peter"];
var newMagicians = __spreadArray([], magicians_43, true);
var show_magicians_43 = function (arr) {
    for (var i = 0; i < arr.length; i++) {
        var e = arr[i];
        console.log(e);
    }
};
var make_great_43 = function (arr) {
    for (var i = 0; i < arr.length; i++) {
        arr[i] = "The Great " + arr[i];
    }
};
make_great_43(newMagicians);
show_magicians_43(magicians_43);
console.log("\n");
show_magicians_43(newMagicians);
