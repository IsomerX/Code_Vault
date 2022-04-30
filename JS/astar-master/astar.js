function cell(h) {
	this.g = 10000000;
	this.h = h;
	this.f = this.g+this.h;
}

let start = new cell(1000);
start.g = 0;
let goal = new cell(0);

function setup() {
  canvas = createCanvas(screen.availWidth*8/10, screen.availHeight*7/10);
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