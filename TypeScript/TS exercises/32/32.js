// Checking Usernames: Do the following to create a program that simulates how websites ensure that everyone has a unique username.
// • Make a list of five or more usernames called current_users.
// • Make another list of five usernames called new_users. Make sure one or two of the new usernames are also in the current_users list.
// • Loop through the new_users list to see if each new username has already been used. If it has, print a message that the person will need to enter a new username. If a username has not been used, print a message saying that the username is available.
// • Make sure your comparison is case insensitive. If 'John' has been used, 'JOHN' should not be accepted.
var current_users = ["adil123", "bilal123", "eric543", "joe321", "clay345"];
var new_users = ["adil123", "ADIL123", "clay789", "bilal123", "jessica345"];
var userExists = function (name) {
    if (current_users.indexOf(name) !== -1) {
        return true;
    }
    else {
        return false;
    }
};
for (var i = 0; i < new_users.length; i++) {
    var e = new_users[i];
    if (userExists(e)) {
        console.log("Enter a new username.");
    }
    else {
        console.log("Username is available");
    }
}
