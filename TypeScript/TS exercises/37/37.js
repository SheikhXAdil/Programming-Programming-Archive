// Large Shirts: Modify the make_shirt() function so that shirts are large by default with a message that reads I love TypeScript. Make a large shirt and a medium shirt with the default message, and a shirt of any size with a different message.
var make_shirt_37 = function (size, text) {
    if (size === void 0) { size = "large"; }
    if (text === void 0) { text = "I love TypeScript"; }
    console.log("Your shirt size is " + size + "and the Text on it is " + "'" + text + "'");
};
make_shirt_37("small", "I love Ts");
make_shirt_37("medium");
make_shirt_37();
