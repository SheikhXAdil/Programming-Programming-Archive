// They think of something you could store in a TypeScript Object. Write a program that creates Objects containing these items.


function carObject(name:string,color:string,type:string):object {
    return {
        name:name,
        color:color,
        type:type
    }
}

console.log(carObject("Sportage", "Blue", "SUV"))
