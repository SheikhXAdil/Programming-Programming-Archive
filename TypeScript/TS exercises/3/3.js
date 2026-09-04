// Name Cases: Store a person’s name in a variable, and then print that person’s name in lowercase, uppercase, and titlecase.
var personName_3 = "adil";
function titleCase(str) {
    str = str.charAt(0).toUpperCase() + str.slice(1);
    return str;
}
// UpperCase
console.log(personName_3.toLocaleUpperCase());
// lowerCase
console.log(personName_3.toLocaleLowerCase());
// TitleCase
console.log(titleCase(personName_3));
