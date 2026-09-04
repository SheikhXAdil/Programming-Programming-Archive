#!/usr/bin/env node

import chalk from "chalk";
import inquirer from "inquirer";
import chalkAnimation from "chalk-animation";



class Person {

    constructor() {
        this.personality = "Mystery";
    }

    private personality:string;
    public askQuestion(answer:number):void {
        if (answer === 1) {
            this.personality = "Extrovert"
        } else if(answer === 2) {
            this.personality = "Introvert"
        } else if(!(Number.isNaN(answer)) && (answer !== 1 && answer !== 2)) {
            console.log("Your personality is still a mystery")
        } else {
            console.log(chalk.red("Please enter an integer value"))
        }
    }
    public getPersonality() {
        return this.personality
    }

}


class Student extends Person {

    constructor() {
        super()
        this._name = ""
    }
    
    private _name:string;
    
    public get Name() : string {
        return this._name
    }
    
    public set value(v : string) {
        this._name = v;
    }
    
    
    
}


const sleep = (ms = 1000) => new Promise((r) => setTimeout(r, ms));


const welcome = async () => {

    console.clear()
    const rainbowTitle = chalkAnimation.rainbow(
        'Welcome to the personality app \n'
    );

    await sleep();
    rainbowTitle.stop();

}


const app = async () => {

        const answer = await inquirer.prompt({
            name: 'personality',
            type: 'input',
            message: 'Enter 1 if you like to talk to others and type 2 if you would rather keep to yourself: ',
        });
        let personality = Number(answer.personality)
    
        const myPerson = new Person()
        myPerson.askQuestion(personality)
        console.log(`You are a/an: ${chalk.yellow(myPerson.getPersonality())}`)

        const name = await inquirer.prompt({
            name: 'name',
            type: 'input',
            message: 'Enter your name: ',
        });

        const myStudent = new Student()
        myStudent.value = name.name

        console.log(`Your name is ${chalk.yellow(myStudent.Name)} and your personality is ${chalk.yellow(myPerson.getPersonality())}`)

}


await welcome()
await app()