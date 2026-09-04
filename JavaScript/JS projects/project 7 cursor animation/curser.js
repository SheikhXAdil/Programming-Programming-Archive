let curser = document.querySelector(".curser");
var timeout;

document.addEventListener("mousemove", (e) => {
    let x = e.pageX;
    let y = e.pageY;

    curser.style.top = y + "px";
    curser.style.left = x + "px";
    curser.style.display = "block";

    function mousestop() {
        curser.style.display = "none";
    }
    
    clearTimeout(timeout);
    timeout = setTimeout(mousestop, 1000);
}) 

document.addEventListener("mouseout", () => {
    curser.style.display = "none";
})