let canvas_height = 800;
let canvas_width = 600;
let resolution = 200;

let l = canvas_height / resolution;
let m = canvas_width / resolution;

let grid = [];

class Cell {
  constructor() {
    // left top right bottom
    this.walls = [true, true, true, true];
  }
}

function setup() {
  var canvas = createCanvas(canvas_height, canvas_width);
  var x = (windowWidth - canvas_width) / 2;
  var y = (windowHeight - canvas_height) / 2;
  canvas.position(x, y);
  
  for (let i = 0; i < l; i++) {
    temp = [];
    for (let j = 0; j < m; j++) {
      cell = new Cell();
      temp.push(cell);
    }
    grid.push(temp);
  }
}

function draw() {
  background(200);
  for(let i = 0; i < l; i++){
    for(let j = 0; j < m; j++){
      strokeWeight(4)
      if(grid[i][j].walls[0]){
        line(i*resolution,j*resolution,i*resolution,(j+1)*resolution);
        ellipse((i+0.5)*resolution,(j+0.5)*resolution,4)
      }
      if(grid[i][j].walls[1]){
        line(i*resolution,j*resolution,(i+1)*resolution,j*resolution);
        ellipse((i+0.5)*resolution,(j+0.5)*resolution,4)
      }
      if(grid[i][j].walls[2]){
        line((i+1)*resolution,j*resolution,(i+1)*resolution,(j+1)*resolution);
        ellipse((i+0.5)*resolution,(j+0.5)*resolution,4)
      }
      if(grid[i][j].walls[3]){
        line(i*resolution,(j+1)*resolution,(i+1)*resolution,(j+1)*resolution);
        ellipse((i+0.5)*resolution,(j+0.5)*resolution,4)
      }
    }
  }
}

function dr(c) {
  stroke(2);
  line(c.i * w, c.j * w, c.i * w + w, c.j * w);
  line(c.i * w, c.j * w, c.i * w, c.j * w + w);
  line(c.i * w + w, c.j * w, c.i * w + w, c.j * w + w);
  line(c.i * w, c.j * w + w, c.i * w + w, c.j * w + w);
  if (c.current) {
    fill(1);
    square(c.i * w, c.j * w, c.i * w + w, c.j * w + w);
  }
}
