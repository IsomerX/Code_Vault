let h, w, n = 50, r = 400;

function cell(theta){
	this.theta = theta;
}

function asd(i){
	circle(r*cos(i.theta)+h/2,r*sin(i.theta)+w/2,20);
	i.theta += PI/(n*n);
	// r-=0.01;
}

function setup() {
  	createCanvas(800, 800);
  	background(51);
  	h = height;
	w = width;
	circle(h/2,w/2,20);
	arr = [];
	for(i = 0; i < 2*PI; i+=2*PI/n){
		a = new cell(i);
		arr.push(a);
	}
}

function draw() {
	
	arr.forEach(asd);
	// 	fill((i*1212)%255);
	// 	circle(r*cos(i)+h/2,r*sin(i)+w/2,(i*1212)%30);
	// }
}






