#!/user/bin/env node
import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";
const sleep = (ms = 1000) => new Promise((r) => setTimeout(r, ms));
const welcome = async () => {
    console.clear();
    const rainbowTitle = chalkAnimation.rainbow("Welcome to the Dungeon!");
    await sleep();
    rainbowTitle.stop();
};
let running = true;
let enemies = ["Skeleton", "Zombie", "Warrior", "Assassin"];
let maxEnemyHealth = 75;
let enemyAttackDamage = 25;
let health = 100;
let attackDamage = 50;
let numHealthPotions = 3;
let healthPotionHealAmount = 30;
let healthPotionDropChance = 50;
const game = async () => {
    Game: while (running) {
        let enemyHealth = Math.floor(Math.random() * maxEnemyHealth);
        const enemy = enemies[Math.floor(Math.random() * enemies.length)];
        console.log("\n<--------------------------------------------->\n");
        console.log(`\t# ${enemy} has appeared! #\n`);
        while (enemyHealth > 0) {
            console.log(`\tYour HP: ${health}`);
            console.log(`\t${enemy}'s HP: ${enemyHealth}`);
            console.log("\n");
            const input = await inquirer.prompt({
                type: "list",
                name: "input",
                message: "What would you like to do?",
                choices: ["1. Attack", "2. Drink health potion", "3. Run!"]
            });
            if (input.input === "1. Attack") {
                const damageDealt = Math.floor(Math.random() * attackDamage);
                const damageTaken = Math.floor(Math.random() * enemyAttackDamage);
                enemyHealth -= damageDealt;
                health -= damageTaken;
                console.log("\n");
                console.log(`\t> You striked the ${enemy} for ${damageDealt} damage.`);
                console.log(`\t> You recieved ${damageTaken} in retaliation!`);
                if (health < 1) {
                    console.log(chalk.red("\t> You have taken too much damage, you are too weak to go on!>"));
                    break;
                }
            }
            else if (input.input === "2. Drink health potion") {
                if (numHealthPotions > 0) {
                    health += healthPotionHealAmount;
                    numHealthPotions--;
                    console.log(`\t> You drank a health potion, healing yourself for ${healthPotionHealAmount}.` +
                        `\n\t> You have ${health} HP.` +
                        `\n\t> You have ${numHealthPotions} Health Potions left\n`);
                }
                else {
                    console.log("\t> You have no health potions left! Defeat enemies for a chance to get one!");
                }
            }
            else if (input.input === "3. Run!") {
                console.log(`\tYou ran away from the ${enemy}!`);
                continue Game;
            }
        }
        if (health < 1) {
            console.log("\t\nYou limp out of the dungeon, weak from battle");
            break;
        }
        console.log("\n<--------------------------------------------->\n");
        console.log(`\t# ${enemy} was defeated! #\n`);
        console.log(`\t# You have ${health} HP left #\n`);
        if (Math.floor(Math.random() * 100) < healthPotionDropChance) {
            numHealthPotions++;
            console.log(`\t# The ${enemy} dropped a health potion #\n`);
            console.log(`\t# You now have ${numHealthPotions} health potions #\n`);
        }
        console.log("\n<--------------------------------------------->\n");
        const input = await inquirer.prompt({
            type: "list",
            name: "input",
            message: "What would you like to do noe?",
            choices: ["1. Continue", "2. Exit the Dungeon"]
        });
        if (input.input === "1. Continue") {
            console.log(chalk.green("\t\nYou continue on your adventure!!"));
        }
        else if (input.input === "2. Exit the Dungeon") {
            console.log("\t\nYou exited the dungeon, successful from your battle");
            break;
        }
    }
    await sleep();
    console.clear();
    console.log(chalk.cyanBright("\t\nThank you for playing the game!!!"));
};
await welcome();
await game();
