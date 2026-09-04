// No Users: Add an if test to Exercise 28(30) to make sure the list of users is not empty.
// • If the list is empty, print the message We need to find some users!

// • Remove all of the usernames from your array, and make sure the correct message is printed.

let members_30:string[] = ["Admin", "Eric", "Jessica", "Joe", "Louis"]
members_30.pop()
members_30.pop()
members_30.pop()
members_30.pop()
members_30.pop()


if (members_30.length === 0) {
    console.log("We need to find some users!")
} else {
    for (let i = 0; i < members_30.length; i++) {
        const e = members_30[i];
        if (e === "Admin") {
            console.log("Hello admin, would you like to see a status report?")
        }
        else {
            console.log(`Hello ${e}, thank you for logging in again.`)
        }
    }
}