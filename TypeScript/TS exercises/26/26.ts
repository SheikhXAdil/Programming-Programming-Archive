// Alien Colors #2: Choose a color for an alien as you did in Exercise 25, and write an if-else chain.
// • If the alien’s color is green, print a statement that the player just earned 5 points for shooting the alien.

// • If the alien’s color isn’t green, print a statement that the player just earned 10 points.

// • Write one version of this program that runs the if block and another that runs the else block.

let alien_color_26 = 'red';

function alienColor(color:string):string {
    if (color===alien_color_26) {
        return "U have earned 5 points"
    }
    else{
        return "U have earned 10 points"
    }
}

console.log(alienColor("red"))
console.log(alienColor("green"))