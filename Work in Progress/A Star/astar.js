canvas_height = 600
canvas_width = 800
resolution = 20

class Cell{
  constructor(){
    this.parent = [0,0];
    this.f = Infinity;
    this.g = Infinity;
    this.h = Infinity;
  }
}

let grid;

function setup() {
  createCanvas(canvas_width, canvas_height);
  background(153);
  let 
}

function draw() {
	background(0);
  if (mouseIsPressed) {
    fill(0);
  } else {
    fill(255);
  }
  ellipse(mouseX, mouseY, 80, 80);
}