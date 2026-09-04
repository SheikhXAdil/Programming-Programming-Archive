let button = document.querySelector("button");
let body = document.querySelector("body");
let image = ["url('11.jpg')", "url('22.jpg')", "url('33.jpg')", "url('44.jpg')", "url('55.jpg')", "url('99.jpg')"]

body.style.backgroundImage = ("url('99.jpg')")    

 button.addEventListener("click", changer);

   function changer(){
        let imageindex = image[Math.floor(Math.random()* image.length)];
        body.style.backgroundImage = imageindex

  }
