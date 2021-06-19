canvas_height = window.innerHeight;
canvas_width = window.innerWidth;
resolution = 100;
canvas_height -= canvas_height%resolution;
canvas_width -= canvas_width%resolution;

class Cell {
  constructor() {
    this.parent = [];
    this.f = Infinity;
    this.g = Infinity;
    this.h = Infinity;
    this.obstacle = false;
    this.start = false;
    this.end = false;
  }
}

class Priority {
  constructor() {
    this.array = [];
  }
  push(pos) {
    let current_cell = grid[pos[0]][pos[1]];
    let index = 0;
    for (; index < this.array.length; index++) {
      let temp = grid[this.array[index][0]][this.array[index][1]];
      if (current_cell.f < temp.f) break;
    }
    this.array.splice(index, 0, pos);
  }
  pop() {
    this.array.shift();
  }
}

let grid = [];
let l = canvas_height / resolution;
let m = canvas_width / resolution;

let open = new Priority();
let closed = [];
let path = [];

let neighX = [-1, 0, 1, 1, 1, 0, -1, -1];
let neighY = [-1, -1, -1, 0, 1, 1, 1, 0];

let start_pos = [0, 0];
let end_pos = [l - 1, m - 1];

function setup() {
  createCanvas(canvas_width + 2, canvas_height + 2);

  for (let i = 0; i < l; i++) {
    let temp = [];
    for (let j = 0; j < m; j++) {
      cell = new Cell();
      temp.push(cell);
    }
    grid.push(temp);
  }

  grid[0][0].start = true;
  grid[0][0].f = 0;
  grid[0][0].g = 0;
  grid[l - 1][m - 1].end = true;
  open.push([0, 0]);
  grid[0][1].obstacle = true;
  
  grid[1][1].obstacle = true;
  
  grid[2][2].obstacle = true;
  astar();
}

function reconstruct(pos){
  while(1){
    if(grid[pos[0]][pos[1]].start){
      path.push(start_pos);
      break;
    }
    path.push(pos);
    pos = grid[pos[0]][pos[1]].parent;
    
  }
}

function astar(){
  while (open.array.length != 0) {
    let current = grid[open.array[0][0]][open.array[0][1]];
    x = open.array[0][1];
    y = open.array[0][0];
    if (grid[y][x].end == true) {
      reconstruct([y,x]);
      while (open.array.length != 0) {
        open.pop();
      }
      return;
    }
    open.pop();
    for (let i = 0; i < 8; i++) {
      dr = y + neighY[i];
      dc = x + neighX[i];
      if (dr >= l || dc >= m || dr < 0 || dc < 0 || grid[dr][dc].obstacle) continue;
      if(closed.includes([dr,dc])){
        continue;
      }
      
      
      
      let temp_g = current.g + Math.sqrt((dr - y) * (dr - y) + (dc - x) * (dc - x));
      let temp_h = Math.sqrt((dr - end_pos[0]) * (dr - end_pos[0]) +(dc - end_pos[1]) * (dc - end_pos[1]));
      if(temp_g + temp_h > grid[dr][dc].f){
        continue;
      }
      
      grid[dr][dc].g = temp_g;
      grid[dr][dc].h = temp_h;
      grid[dr][dc].f = temp_g + temp_h;
      grid[dr][dc].parent = [y, x];
      open.push([dr,dc]);
    }
    closed.push([y,x]);
  }
  return;
}

function draw() {
  // background(0);

  for (let i = 0; i < l; i++) {
    for (let j = 0; j < m; j++) {
      // noStroke();
      if(grid[i][j].obstacle)
        fill(0);
      else if (grid[i][j].start != true && grid[i][j].end != true)
        fill(255, 13, 150);
      else if (grid[i][j].start == true) fill(118, 150, 255);
      else fill(255, 59, 13);
      rect(j * resolution, i * resolution, resolution, resolution, 30);
    }
  }

  for(let i = 0; i < path.length; i++){
    fill(0);
    ellipse(path[i][1]*resolution + resolution/2,path[i][0]*resolution+ resolution/2, 20);
  }
}

function mouseClicked(){
  if(mouseX <= width && mouseY <= height){
    for (let i = 0; i < l; i++) {
      for (let j = 0; j < m; j++) {
        grid[i][j].f = Infinity;
        grid[i][j].g = Infinity;
        grid[i][j].h = Infinity;
      }
    }
  
    grid[0][0].start = true;
    grid[0][0].f = 0;
    grid[0][0].g = 0;
    grid[l - 1][m - 1].end = true;
    open.push([0, 0]);
    x = Math.floor(mouseX/resolution);
    y = Math.floor(mouseY/resolution);
    grid[y][x].obstacle = 1-grid[y][x].obstacle;
    path = []
    open.push(start_pos);
    astar();
  }
}