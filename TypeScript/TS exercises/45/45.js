// Cars: Write a function that stores information about a car in a Object. The function should always receive a manufacturer and a model name. It should then accept an arbitrary number of keyword arguments. Call the function with the required information and two other name-value pairs, such as a color or an optional feature. Print the Object that’s returned to make sure all the information was stored correctly.
var carInfo = function (manufacturer, model, arr) {
    var carObj = {
        Manufacturer: manufacturer,
        Model: model
    };
    if (arr) {
        for (var i = 0; i < arr.length; i++) {
            var e = arr[i];
            carObj[e[0]] = e[1];
        }
    }
    console.log(carObj);
};
carInfo("Honda", "City", [["Color", "blue"], ["Price", "5 million"]]);
carInfo("Honda", "Civic", [["Color", "black"], ["Price", "8 million"]]);
carInfo("Kia", "Sportage", []);
