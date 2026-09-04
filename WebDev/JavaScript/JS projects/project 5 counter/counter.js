(function (){
    let buttons = document.querySelectorAll(".counter-btn");
    let count = 0;


    buttons.forEach(buttons => {
        buttons.addEventListener("click", function () {
            if(buttons.classList.contains("prevbtn")){
                count--;
            }
            else if (buttons.classList.contains("addbtn")) {
                count++;
            }
            
            let counter = document.getElementById("counter")
            counter.textContent = count;
            
            if (count < 0) {
            counter.style.color = "red";                
            }
            else if (count > 0) {
                counter.style.color = "green"
           }
           else {
            counter.style.color = "black"
           }
        })
        
    });

}) ()