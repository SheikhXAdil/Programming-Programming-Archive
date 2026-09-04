#!/usr/bin/env node
import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";
import { createSpinner } from "nanospinner";
import { questions } from "./questions.js";
let playerName;
let totalScore = 100;
let score = 0;
const sleep = (ms = 2000) => new Promise((r) => setTimeout(r, ms));
const answerCheck = (ms = 1000) => new Promise((r) => setTimeout(r, ms));
const welcome = async () => {
    console.clear();
    const rainbowTitle = chalkAnimation.rainbow('Welcome to the typescript quiz \n');
    await sleep();
    rainbowTitle.stop();
    console.log(`
    ${chalk.bgBlue('HOW TO PLAY')} 
    U will be asked questions about typescript.
    Answer as many as u can.
    ${chalk.green("Good Luck!!")}
  `);
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
function shuffleQuestions(questions) {
    for (let i = questions.length - 1; i > 0; i--) {
        let j = Math.floor(Math.random() * (i + 1));
        let temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
    return questions;
}
const quiz = async () => {
    for (let i = 0; i < questions.length; i++) {
        console.clear();
        console.log("\n");
        const e = questions[i];
        const question = await inquirer.prompt({
            name: `answer`,
            type: 'list',
            message: e.Question,
            choices: e.options
        });
        const spinner = createSpinner('Checking answer...').start();
        await answerCheck();
        spinner.stop();
        if (question.answer === e.correct) {
            score += 10;
        }
        console.log(score);
    }
};
const result = async () => {
    console.clear();
    if (score > 50) {
        console.log("\n\n");
        const result = chalkAnimation.neon(`Congratulations!! ${playerName}`);
        // await sleep()
        // result.stop()
        result.start();
        console.log(`
${chalk.greenBright(`You scored ${score} out of ${totalScore}`)}`);
    }
    else {
        console.log(`
${chalk.redBright(`You scored ${score} out of ${totalScore}`)}
        
Clear your concepts about typescript ${playerName} to score better next time
        `);
    }
};
await welcome();
await askName();
shuffleQuestions(questions);
await quiz();
await result();
