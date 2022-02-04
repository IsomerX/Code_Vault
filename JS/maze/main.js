function setup(){
	createCanvas(800,800);
	n = 4;
	w = height/n;
}

function draw(){
	background(200);
	grid = [];
	for(var i = 0; i < n; i++){
		var temp = []
		for(var j = 0; j < n; j++){
			var ro = new cell(i,j);
			temp.push(ro);
		}
		grid.push(temp);
	}

	grid[0][0].current = 1;

	for(var i = 0; i < n; i++){
		for(var j = 0; j < n; j++){
			dr(grid[i][j]);
		}
	}
	grid[floor(random(0,n))][floor(random(0,n))].current = 1;
	
}

function cell(i, j){
	this.i = i;
	this.j = j;
	this.neighbours = [];
	this.visited = 0;
	this.current = 0;
}

function dr(c){
	stroke(2);
	line(c.i*w,c.j*w,c.i*w+w,c.j*w);
	line(c.i*w,c.j*w,c.i*w,c.j*w+w);
	line(c.i*w+w,c.j*w,c.i*w+w,c.j*w+w);
	line(c.i*w,c.j*w+w,c.i*w+w,c.j*w+w);
	if(c.current){
		fill(1);
		square(c.i*w,c.j*w,c.i*w+w,c.j*w+w);
	}
}