const box = document.getElementsByClassName("number-layer");

// make a parallax effect for box on scroll
window.onscroll = function() {
    let scroll = window.pageYOffset;
    // get the yoffset of an element with id parallax-container
    let parallax = document.getElementById("parallax-container").offsetTop;
    box[0].style.top = ((scroll-parallax) * 0.4 ) + "px" ;
}