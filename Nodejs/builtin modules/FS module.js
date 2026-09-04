// const fs = require("fs")
const {readFileSync, writeFileSync, readFile} = require("fs")

let first = readFileSync("D:/work/Complete Web Development/Nodejs/builtin modules/first.txt", "utf-8")
let second = readFileSync("D:/work/Complete Web Development/Nodejs/builtin modules/second.txt", "utf-8")

console.log(first, second)

writeFileSync("D:/work/Complete Web Development/Nodejs/builtin modules/third.txt", `${first} and ${second}`)

readFile("D:/work/Complete Web Development/Nodejs/builtin modules/first.txt", "utf-8", (err,res) => {
    if (err) {
        console.log(err)
        return null
    }
    console.log(res)
})
readFile("D:/work/Complete Web Development/Nodejs/builtin modules/second.txt", "utf-8", (err,res) => {
    if (err) {
        console.log(err)
        return null
    }
    console.log(res)
})