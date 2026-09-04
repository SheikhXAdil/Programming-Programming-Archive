#!/usr/bin/env node

import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";


const sleep = (ms = 1000) => new Promise((r) => setTimeout(r, ms));

let username: string = "Null";
let loginUsername: string = "Null";

let userpassword: number = NaN;
let loginUserpassword: number = NaN;

let accountBalance: number = 0
let transactionMethod: string;
let transactionAmount: number;


const welcome = async () => {
    console.clear()
    const rainbowTitle = chalkAnimation.rainbow(
        'Welcome to Adil atm \n'
    );

    await sleep();
    rainbowTitle.stop();

}

const register = async () => {

    while (username === "Null") {
        const usernameInput = await inquirer.prompt({
            name: 'name',
            type: 'input',
            message: 'Enter username to register:',
            default() {
                return "Null"
            }
        });
        username = usernameInput.name
    }

    while (Number.isNaN(userpassword)) {
        const userpasswordInput = await inquirer.prompt({
            name: 'password',
            type: 'input',
            message: 'Set 4-digit pin:',
            default() {
                return "Null"
            }
        });
        userpassword = Number(userpasswordInput.password)
    }

}

const login = async () => {

    console.clear()
    console.log(chalk.cyanBright("Enter username and pin to login: \n"))

    while (username !== loginUsername) {
        const usernameLogin = await inquirer.prompt({
            name: 'name',
            type: 'input',
            message: 'Enter username:',
            default() {
                return "Null"
            }
        });
        loginUsername = usernameLogin.name
        if (username !== loginUsername) {
            console.log(chalk.red("Wrong credentials"))
        }
    }

    while (userpassword !== loginUserpassword) {
        const userpasswordLogin = await inquirer.prompt({
            name: 'password',
            type: 'input',
            message: 'Enter the 4-digit pin:',
            default() {
                return "Null"
            }
        });
        loginUserpassword = Number(userpasswordLogin.password)
        if (userpassword !== loginUserpassword) {
            console.log(chalk.red("Wrong credentials"))
        }
    }

}

const transaction = async () => {
    console.log(`\n Your account balance is ${chalk.yellow(accountBalance)} \n`)

    const methodInput = await inquirer.prompt({
        name: 'method',
        type: 'list',
        message: 'Select method of transaction:',
        choices: ["Credit", "Debit"]
    });
    transactionMethod = methodInput.method

    const amountInput = await inquirer.prompt({
        name: 'amount',
        type: 'input',
        message: 'Enter amount:',
        default() {
            return 0
        }
    });
    transactionAmount = Number(amountInput.amount)


    if (transactionMethod === "Credit") {
        accountBalance += transactionAmount
        console.log(`\n Your account balance is now ${chalk.yellow(accountBalance)} \n`)
    } else if (transactionMethod === "Debit" && accountBalance >= transactionAmount) {
        accountBalance -= transactionAmount
        console.log(`\n Your account balance is now ${chalk.yellow(accountBalance)} \n`)
    } else if (accountBalance < transactionAmount) {
        console.log(chalk.red("\n Insufficient balance. please recharge your account \n"))
    }

    await logout()

}



const logout = async () => {

    let logout: string = "";

    while (logout !== "yes" && logout !== "no") {
        const logoutPrompt = await inquirer.prompt({
            name: 'answer',
            type: 'input',
            message: 'Do you want to continue (enter yes) or logout (enter no)?',
            default() {
                return "yes"
            }
        });
        logout = logoutPrompt.answer
    }

    if (logout === "yes") {
        await transaction()
    } else if (logout === "no") {
        await appExit()
    }
}



const appExit = async () => {

    let exit: string = "";

    while (exit !== "yes" && exit !== "no") {
        const exitPrompt = await inquirer.prompt({
            name: 'answer',
            type: 'input',
            message: 'Do you want to exit the app?',
            default() {
                return "no"
            }
        });
        exit = exitPrompt.answer
    }
    if (exit === "no") {
        loginUsername = ""
        loginUserpassword = NaN
        await loggedin()
    } else if (exit === "yes") {
        console.log(`\n ${chalk.green("Thank you for using the app. Have a nice day")}`)
        process.exit(1)
    }
}


const loggedin = async () => {
    await login()
    await transaction()
}


await welcome()
await register()
await loggedin()

