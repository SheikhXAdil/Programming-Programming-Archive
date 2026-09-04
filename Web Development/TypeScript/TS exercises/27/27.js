// Alien Colors #3: Turn your if-else chain from Exercise 5-4 into an if-else chain.
// • If the alien is green, print a message that the player earned 5 points.
// • If the alien is yellow, print a message that the player earned 10 points.
// • If the alien is red, print a message that the player earned 15 points.
// • Write three versions of this program, making sure each message is printed for the appropriate color alien.
function alienColor(color) {
    if (color === "green") {
        return "U have earned 5 points";
    }
    else if (color === "yellow") {
        return "U have earned 10 points";
    }
    else if (color === "red") {
        return "U have earned 15 points";
    }
    else {
        return "no";
    }
}
console.log(alienColor("green"));
console.log(alienColor("yellow"));
console.log(alienColor("red"));
