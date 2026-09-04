// OS module
const os = require('os')

const userInfo = os.userInfo()
// console.log(userInfo)

const sysUptime = os.uptime()
// console.log(`System uptime is ${sysUptime}`)

const OSinfo = {
    name: os.type(),
    release: os.release(),
    version: os.version(),
    totalmem: os.totalmem(),
    freemem: os.freemem(),
}
// console.log(OSinfo)

// Path module

const path = require("path")

// console.log(path.sep)
const filepath = path.join("/pdf maker", "new.html")
// console.log(filepath)
// console.log(path.basename(filepath))

const abspath = path.resolve(__dirname, "pdf maker", "new.html")
// console.log(abspath)