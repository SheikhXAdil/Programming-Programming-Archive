#!/usr/bin/env node
import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";
const sleep = (ms = 1000) => new Promise((r) => setTimeout(r, ms));
let seconds = 0;
let currentTime = new Date();
const welcome = async () => {
    console.clear();
    const rainbowTitle = chalkAnimation.rainbow('Welcome to the word counter \n');
    await sleep();
    rainbowTitle.stop();
    console.log(chalk.greenBright('Hi!!!'));
    console.log("I am a countdown timer. Enter the amount of time for which you want me to run\n");
};
const app = async () => {
    while (seconds === 0 || isNaN(seconds)) {
        const answer = await inquirer.prompt({
            name: 'seconds',
            type: 'input',
            message: 'Enter the duration of timer in seconds:',
        });
        if (seconds === 0) {
            console.log(chalk.red("Enter a correct number areater than 0 please\n"));
        }
        seconds = Number(answer.seconds);
    }
    while (currentTime.getSeconds() + seconds >= currentTime.getSeconds()) {
        console.log(currentTime.getSeconds() + seconds - currentTime.getSeconds());
        await sleep();
        seconds--;
    }
    console.log(chalk.cyanBright("Counter finished!!!"));
};
await welcome();
await app();
