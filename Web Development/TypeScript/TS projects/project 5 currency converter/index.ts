#!/usr/bin/env node

import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";
import { createSpinner } from "nanospinner"
import {mapedCurrencies, conversion} from './currencies.js'



const sleep = (ms = 1000) => new Promise((r) => setTimeout(r, ms));


let from: string;
let to: string;
let amount: number;


const welcome = async () => {
  console.clear()
  const rainbowTitle = chalkAnimation.rainbow(
    'Welcome to the currency converter \n'
  );

  await sleep();
  rainbowTitle.stop();
}


const userInputs = async () => {

  const answer = await inquirer.prompt([{
    name: 'from',
    type: 'input',
    message: 'Enter the currency from which u want to convert'
  },
  {
    name: 'to',
    type: 'input',
    message: 'Enter the currency to which u want to convert'
  },
  {
    name: 'amount',
    type: 'input',
    message: 'Enter the amount u want to convert'
  }
  ]);

  from = answer.from
  to = answer.to
  amount = answer.amount

  await result()

}

const result = async () => {
  const spinner = createSpinner('Converting...').start();
    await conversion(from.toUpperCase(), to.toUpperCase(), amount);
    spinner.stop()

    const answer = await inquirer.prompt({
      name: 'continue',
      type: 'input',
      message: 'What would u like to continue?',
      default() {
        return "yes"
      }
    });
    if(answer.continue === "yes"){
      app()
    }
    else {
      console.log("\nThank you for using the app")
      process.exit(0)
    }

}


const app = async () => {

  const answer = await inquirer.prompt({
    name: 'task',
    type: 'list',
    message: 'What would u like to do',
    choices: ["Conversion", "See the country codes"]
  });
  if (answer.task === "See the country codes") {

    console.log(mapedCurrencies, "\n")
    const convert = await inquirer.prompt({
      name: 'confirm',
      type: 'input',
      message: 'What would u like to convert now (enter Y) or exit the app (enter N)?',
      default() {
        return "Y"
      }
    });
    if (convert.confirm === "Y") {
      await userInputs()
    } else {
      process.exit(0)
    }

  } else {
    await userInputs()
  }

}

await welcome()
await app()


