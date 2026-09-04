let imageindex = 0;
showing(imageindex);
function btn_show(e) {
    showing(imageindex = e)
}
function side_slide(e) {
    showing(imageindex += e)
}
function showing(e){
    var i;
    let img = document.querySelectorAll("img")
    let sliders = document.querySelectorAll(".btn-sliders span")
    if (e > img.length) {
        imageindex = 1
    }
    else if (e < 1) {
        imageindex = img.length
    }
    for (i = 0; i < img.length; i++){
        img[i].style.display = "none";
    }
    img[imageindex - 1].style.display = "block";

}