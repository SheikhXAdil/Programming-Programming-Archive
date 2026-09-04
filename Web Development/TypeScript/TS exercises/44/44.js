// Sandwiches: Write a function that accepts a array of items a person wants on a sandwich. The function should have one parameter that collects as many items as the function call provides, and it should print a summary of the sandwich that is being ordered. Call the function three times, using a different number of arguments each time.
var make_sandwich = function (_a) {
    var args = _a.slice(0);
    console.log("Your order contains the following items:");
    for (var i = 0; i < args.length; i++) {
        var e = args[i];
        console.log(e);
    }
};
make_sandwich(["cheese", "tamato", "chicken", "cucumber"]);
console.log("\n");
make_sandwich(["beef", "cheese", "lettuse"]);
console.log("\n");
make_sandwich(["beef", "cheese", "olives", "tomatos"]);
