function preload() {
	pb = loadImage('piece/pb.png');
	rb = loadImage('piece/rb.png');
	knb = loadImage('piece/knb.png');
	kb = loadImage('piece/kb.png');
	bb = loadImage('piece/bb.png');
	qb = loadImage('piece/qb.png');

	pw = loadImage('piece/pw.png');
	rw = loadImage('piece/rw.png');
	knw = loadImage('piece/knw.png');
	kw = loadImage('piece/kw.png');
	bw = loadImage('piece/bw.png');
	qw = loadImage('piece/qw.png');
}

function setup() {
  	createCanvas(800, 800);
  	board = grid(8,8);
	black = "000000";
	white = "FFFFFF";
	cell_dimensions = height/8;
  	initialize();
  	current = -1;
  	currenta = new cell();
}

function draw() {
	drawer();
}

function mouseClicked(){
	if(mouseX > width || mouseY >height)
		return;
	let r = floor(mouseX/cell_dimensions);
	let c = floor(mouseY/cell_dimensions);

	if(current == -1){
		current = active(board[r][c]);
		currenta = r*10+c;
	}
	else{
		q=floor(currenta/10);
		w=currenta%10;
		if(q==r && w ==c)
			return;
		if(active(board[r][c])%10 == 3)
			alert("checkmate");

		console.log(active(board[q][w]) + "  " + active(board[r][c]))
		if((floor(active(board[q][w])/10) == floor(active(board[r][c])/10)) || (floor(active(board[q][r])/10) == floor(active(board[r][c])/10)))
			return;
		switch(current){
			case 20:
				allzero(board[r][c]);
				board[r][c].color = 0;
				board[r][c].pawn = 1;
				board[q][w].pawn = 0;
				break;
			case 21:
				allzero(board[r][c]);
				board[r][c].color = 0;
				board[r][c].bishop = 1;
				board[q][w].bishop = 0;
				break;
			case 22:
				allzero(board[r][c]);
				board[r][c].color = 0;
				board[r][c].knight = 1;
				board[q][w].knight = 0;
				break;
			case 23:
				allzero(board[r][c]);
				board[r][c].color = 0;
				board[r][c].king = 1;
				board[q][w].king = 0;
				break;
			case 24:
				allzero(board[r][c]);
				board[r][c].color = 0;
				board[r][c].rook = 1;
				board[q][w].rook = 0;
				break;
			case 25:
				allzero(board[r][c]);
				board[r][c].color = 0;
				board[r][c].queen = 1;
				board[q][w].queen = 0;
				break;


			case 10:
				allzero(board[r][c]);
				board[r][c].color = 1;
				board[r][c].pawn = 1;
				board[q][w].pawn = 0;
				break;
			case 11:
				allzero(board[r][c]);
				board[r][c].color = 1;
				board[r][c].bishop = 1;
				board[q][w].bishop = 0;
				break;
			case 12:
				allzero(board[r][c]);
				board[r][c].color = 1;
				board[r][c].knight = 1;
				board[q][w].knight = 0;
				break;
			case 13:
				allzero(board[r][c]);
				board[r][c].color = 1;
				board[r][c].king = 1;
				board[q][w].king = 0;
				break;
			case 14:
				allzero(board[r][c]);
				board[r][c].color = 1;
				board[r][c].rook = 1;
				board[q][w].rook = 0;
				break;
			case 15:
				allzero(board[r][c]);
				board[r][c].color = 1;
				board[r][c].queen = 1;
				board[q][w].queen = 0;
				break;
			default:
				break;
		}
		current = -1;
	}
	clear();
}

function allzero(a){
	a.pawn = 0;
	a.bishop = 0;
	a.knight = 0;
	a.queen = 0;
	a.king = 0;
	a.rook = 0;
	a.color = 0;
}

function active(a){
	if(a.pawn == 1 && a.color == 1){
		// image(pb, mouseX, mouseY, cell_dimensions, cell_dimensions);
		return 10;
	}
	if(a.bishop == 1 && a.color == 1){
		return 11;
	}
	if(a.knight == 1 && a.color == 1){
		return 12;
	}
	if(a.king == 1 && a.color == 1){
		return 13;
	}
	if(a.rook == 1 && a.color == 1){
		return 14;
	}
	if(a.queen == 1 && a.color == 1){
		return 15;
	}


	if(a.pawn == 1 && a.color == 0){
		// image(pb, mouseX, mouseY, cell_dimensions, cell_dimensions);
		return 20;
	}
	if(a.bishop == 1 && a.color == 0){
		return 21;
	}
	if(a.knight == 1 && a.color == 0){
		return 22;
	}
	if(a.king == 1 && a.color == 0){
		return 23;
	}
	if(a.rook == 1 && a.color == 0){
		return 24;
	}
	if(a.queen == 1 && a.color == 0){
		return 25;
	}
}

function drawer(){
	for(var i = 0; i < 8; i++){
		for(var j = 0; j < 8; j++){
			noStroke();
			if((i+j)%2==0){
				fill(177);
			}
			else{
				fill(57);
			}
			square(cell_dimensions*i, cell_dimensions*j, cell_dimensions)
		}
	}

	for(var i = 0; i < 8; i++){
		for(var j = 0; j < 8; j++){

			const u = cell_dimensions*i;
			const v = cell_dimensions*j;

			if(board[i][j].pawn){
				if(board[i][j].color == 1){
					image(pw,u,v,cell_dimensions,cell_dimensions);
				}
				else{
					image(pb,u,v,cell_dimensions,cell_dimensions);	
				}
			}
			if(board[i][j].knight){
				if(board[i][j].color == 1){
					image(knw,u,v,cell_dimensions,cell_dimensions);
				}
				else{
					image(knb,u,v,cell_dimensions,cell_dimensions);
				}
			}
			if(board[i][j].bishop){
				if(board[i][j].color == 1){
					image(bw,u,v,cell_dimensions,cell_dimensions);
				}
				else{
					image(bb,u,v,cell_dimensions,cell_dimensions);
				}
			}
			if(board[i][j].rook){
				if(board[i][j].color == 1){
					image(rw,u,v,cell_dimensions,cell_dimensions);
				}
				else{
					image(rb,u,v,cell_dimensions,cell_dimensions);	
				}
			}
			if(board[i][j].queen){
				if(board[i][j].color == 1){
					image(qw,u,v,cell_dimensions,cell_dimensions);	
				}
				else{
					image(qb,u,v,cell_dimensions,cell_dimensions);		
				}	
			}
			if(board[i][j].king){
				if(board[i][j].color == 1){
					image(kw,u,v,cell_dimensions,cell_dimensions);	
				}
				else{
					image(kb,u,v,cell_dimensions,cell_dimensions);		
				}	
			}
		}
	}
}

function initialize(){
	for(var i = 0; i < 8; i++){
		board[i][0].color = 0;
		board[i][1].color = 0;

		board[i][6].color = 1;
		board[i][7].color = 1;
	}

	for(var i = 0; i < 8; i++){
		board[i][1].pawn = 1;
		board[i][6].pawn = 1;
	}

	board[0][0].rook = 1;
	board[0][7].rook = 1;
	board[7][0].rook = 1;
	board[7][7].rook = 1;

	board[1][0].knight = 1;
	board[6][0].knight = 1;
	board[1][7].knight = 1;
	board[6][7].knight = 1;

	board[2][0].bishop = 1;
	board[5][0].bishop = 1;
	board[2][7].bishop = 1;
	board[5][7].bishop = 1;


	board[3][0].queen = 1;
	board[3][7].queen = 1;

	board[4][0].king = 1;
	board[4][7].king = 1;
}

function grid( rows, cols){

	var arr = [];

	// Creates all lines:
	for(var i=0; i < rows; i++){
      	// Creates an empty line
  		arr.push([]);
      	// Adds cols to the empty line:
      	arr[i].push( new Array(cols));
    	for(var j=0; j < cols; j++){
        // Initializes:
    		arr[i][j] = new cell(i,j);
      	}
  	}
	return arr;
}

function cell(i,j){
	this.x = i;
	this.y = j;
	this.color = 0;
	this.bishop = 0;
	this.pawn = 0;
	this.king = 0;
	this.queen = 0;
	this.rook = 0;
	this.knight = 0;
}






