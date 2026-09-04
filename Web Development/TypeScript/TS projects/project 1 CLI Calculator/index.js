#!/usr/bin/env node
import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";
import figlet from "figlet";
import gradient from "gradient-string";
let playerName;
let operation;
let amount;
let numbers = [];
const sleep = (ms = 2000) => new Promise((r) => setTimeout(r, ms));
const welcome = async () => {
    console.clear();
    const rainbowTitle = chalkAnimation.rainbow('Welcom to my cli calculator \n');
    await sleep();
    rainbowTitle.stop();
};
const askName = async () => {
    const answer = await inquirer.prompt({
        name: 'player_name',
        type: 'input',
        message: 'What is your name?',
        default() {
            return 'Player';
        },
    });
    playerName = answer.player_name;
    // console.log(playerName)
};
const askOperation = async () => {
    const answer = await inquirer.prompt({
        name: 'operation',
        type: 'list',
        message: `What operation do u want to perfrom ${playerName}?\n`,
        choices: [
            "Addition",
            "Subtraction",
            "Multiplication",
            "Division"
        ],
    });
    operation = answer.operation;
    return operation;
    //   console.log(operation)
};
const askNumbers = async () => {
    const operationAnswer = await inquirer.prompt({
        name: 'amount',
        type: 'input',
        message: `On how many numbers do u want to perfrom this operation ${playerName}?`,
    });
    amount = Number(operationAnswer.amount);
    if (Number.isNaN(amount) || amount === 0) {
        console.error(chalk.bgRed("Error: A valid number was not entered"));
        process.exit(1);
    }
    else {
        let suffixCounter = 1;
        let suffix;
        for (let i = 1; i <= amount; i++) {
            if (suffixCounter === 1) {
                suffix = "st";
            }
            else if (suffixCounter === 2) {
                suffix = "nd";
            }
            else if (suffixCounter === 3) {
                suffix = "rd";
            }
            else {
                suffix = "th";
            }
            const entriesAnswers = await inquirer.prompt({
                name: `number`,
                type: 'input',
                message: `Enter the ${i}${suffix} number`,
            });
            if (Number.isNaN(entriesAnswers.number)) {
                console.error(chalk.bgRed("Error: A valid number was not entered"));
                process.exit(1);
            }
            else if (entriesAnswers.number === "") {
                i--;
                suffixCounter--;
            }
            else {
                numbers.push(Number(entriesAnswers.number));
            }
            suffixCounter++;
        }
    }
    // console.log(numbers)
};
const evaluate = (arr, operate) => {
    let result;
    if (operate === "Addition") {
        result = arr.reduce((a, b) => a + b);
    }
    else if (operate === "Subtraction") {
        result = arr.reduce((a, b) => a - b);
    }
    else if (operate === "Multiplication") {
        result = arr.reduce((a, b) => a * b);
    }
    else {
        result = arr.reduce((a, b) => a / b);
    }
    console.log(`
    
The answer is:
    `);
    figlet(result.toFixed(3), function (err, data) {
        if (err) {
            console.log('Something went wrong...');
            console.dir(err);
            return;
        }
        if (data) {
            console.log(gradient.cristal.multiline(data));
        }
    });
};
await welcome();
await askName();
operation = await askOperation();
await askNumbers();
evaluate(numbers, operation);
