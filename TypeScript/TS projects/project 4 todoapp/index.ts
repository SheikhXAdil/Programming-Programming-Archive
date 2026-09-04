#!/usr/bin/env node

import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";
import { createSpinner } from "nanospinner"



let playerName: string;
let tasks: string[] = []
let operation: string = ""


const sleep = (ms = 1000) => new Promise((r) => setTimeout(r, ms));


const welcome = async () => {
    console.clear()
    const rainbowTitle = chalkAnimation.rainbow(
        'Welcome to the todo app \n'
    );

    await sleep();
    rainbowTitle.stop();


}

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
}

const handleShow = () => {
    if (tasks.length === 0) {
        console.log("No tasks to show")
    }
    for (let i = 0; i < tasks.length; i++) {
        console.log(`${i + 1}: ${tasks[i]}`)
    }
}

const handleAdd = async () => {

    const question = await inquirer.prompt({
        name: `addedTask`,
        type: 'input',
        message: `Enter the task u want to add:`,
    });
    if (question.addedTask !== "") {
        const spinner = createSpinner('\n').start();
        await sleep();
        tasks.push(question.addedTask)
        spinner.stop()
        console.log("Task added successfully. Your tasks are:\n")
        handleShow()

    } else{
       console.log("Please enter a correct task")
    }
}

const handleDelete = async () => {

    const question = await inquirer.prompt({
        name: `task`,
        type: 'list',
        message: `${chalk.bold(`Which task would u like to delete ${playerName}?`)}`,
        choices: tasks
    });
    const spinner = createSpinner('\n').start();
    await sleep();
    let indexOfTask = tasks.indexOf(question.task)
    tasks.splice(indexOfTask, 1)
    spinner.stop()
    console.log("Task deleted successfully. Remaining tasks are:\n")
    handleShow()
}

const handleEdit = async () => {

    const editQuestion = await inquirer.prompt({
        name: `task`,
        type: 'list',
        message: `${chalk.bold(`Which task would u like to edit ${playerName}?`)}`,
        choices: tasks
    });

    const newValue = await inquirer.prompt({
        name: `value`,
        type: 'input',
        message: `${chalk.bold("Enter new value")}`
    });


    const spinner = createSpinner('\n').start();
    await sleep();
    let indexOfTask = tasks.indexOf(editQuestion.task)
    if(newValue.value !== ""){
        tasks[indexOfTask] = newValue.value
    }
    spinner.stop()
    console.log("Task edited successfully. Remaining tasks are:\n")
    handleShow()
}


const app = async () => {

    const question = await inquirer.prompt({
        name: `task`,
        type: 'list',
        message: `${chalk.bold(`What would u like to do ${playerName}?`)}`,
        choices: [
            "Show all tasks",
            "Add a task",
            "Delete a task",
            "Edit a task",
            "Exit app"
        ]
    });
    operation = question.task

    const spinner = createSpinner('\n').start();
    await sleep();
    spinner.stop()

    if (operation === "Show all tasks") {
        handleShow()
        await sleep();
        console.log(`
        `)
        await app()
    }
    else if (operation === "Add a task") {
        await handleAdd()
        await sleep();
        console.log(`
        `)
        await app()
    }
    else if (operation === "Delete a task") {
        await handleDelete()
        await sleep();
        console.log(`
        `)
        await app()
    }
    else if (operation === "Edit a task") {
        await handleEdit()
        await sleep();
        console.log(`
        `)
        await app()
    }
    else {
        await sleep()
    }
}


await welcome()
await askName()
await app()

