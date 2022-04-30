#include <bits/stdc++.h>

using namespace std;

#define For(i,n) for(int i = 0; i < n; i++)

const int nr = 9;

struct cellinfo{
	int freq = 0, pos[2] = {-1};
};

int sudo[nr][nr] = {{0}};
vector<unordered_map<int,bool>> ros(nr), col(nr); 
vector<vector<unordered_map<int,bool>>> single(nr, ros);

std::vector<int> intersection(std::vector<int> &v1, std::vector<int> &v2){
    std::vector<int> v3;

    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    std::set_intersection(v1.begin(),v1.end(),
                          v2.begin(),v2.end(),
                          back_inserter(v3));
    return v3;
}


bool validatorOfSudoku(){
	For(i,nr){
		For(j,nr){
			if(sudo[i][j] == 0){
				cout << "sudoku not complete!" << endl;
				return false;
			}
		}
	}

	For(i,nr){
		unordered_map<int,int> a, b;
		For(j,nr){
			a[sudo[i][j]]++;
			b[sudo[j][i]]++;
		}
		For(j,nr){
			if(a[j+1]!=1){
				cout << "repeatition at row " << i+1 << endl;
				return false;
			}
			if(b[j+1]!=1){
				cout << "repeatition at column " << i+1 << endl;
				return false;
			}
		}
	}
	return true;
}


void boxinter(){
	unordered_map<int, bool> temp;
	for(int i = 0; i < 3; i++){
		for(int j =0; j < 3; j++){
			for(int u = i*3; u < (i+1)*3; u++){
				for(int y = j*3; y < (j+1)*3; y++){
					// cout << i << " " << j << " " << u << " " << y  << endl;
					// cout << u << " " << y  << endl;
					if(sudo[u][y]!=0){
						for(int uq = i*3; uq < (i+1)*3; uq++){
							for(int yq = j*3; yq < (j+1)*3; yq++){
								single[uq][yq] [sudo[u][y]] = 0;
							}
						}
						ros[u][sudo[u][y]] = 0;
						col[y][sudo[u][y]] = 0;
					}
				}
			}
			// cout << endl;
		}
	}
}

void stabilize(){
	For(i, nr){
		For(j,nr){
			if(sudo[i][j] != 0){
				For(k,nr){
					single[k][j][sudo[i][j]] = 0;
					single[i][k][sudo[i][j]] = 0;			
				}
				ros[i][sudo[i][j]] = 0;
				col[j][sudo[i][j]] = 0;
			}			
		}
	}
	cout << "hello mate"<<endl;
	boxinter();
	cout << "hello mate"<<endl;
}

void rowinter(){
	For(i, nr){
		cellinfo rr[nr];
		For(j, nr){
			For(k, nr){
				if(single[i][j][k+1] && sudo[i][j] == 0){
					rr[k].freq++;
					if(rr[k].freq == 1){
						rr[k].pos[0] = i;
						rr[k].pos[1] = j; 
					}
				}
			}
		}
		For(j,nr){
			if(rr[j].freq == 1){
				cout << j+1 << " has been filled at: " << rr[j].pos[0] << ", " << rr[j].pos[1] << "by rowinter" << endl;
				For(y, nr){
					single[rr[j].pos[0]][y][j+1] = 0;
					single[y][rr[j].pos[1]][j+1] = 0;
				}

				ros[rr[j].pos[0]][j+1] = 0;
				col[rr[j].pos[1]][j+1] = 0;

				sudo[rr[j].pos[0]][rr[j].pos[1]] = j+1;
				For(k, nr){
					single[rr[j].pos[0]][rr[j].pos[0]][k+1] = 0;
				}
			}
		}
	}
}

void colinter(){
	For(i, nr){
		cellinfo rr[nr];
		For(j, nr){
			For(k, nr){
				if(single[j][i][k+1] && sudo[j][i] == 0){
					rr[k].freq++;
					if(rr[k].freq == 1){
						rr[k].pos[0] = j;
						rr[k].pos[1] = i;
					}
				}
			}
		}
		For(j,nr){
			if(rr[j].freq == 1){
				cout << j+1 << " has been filled at: " << rr[j].pos[0] << ", " << rr[j].pos[1] << "by colinter" << endl;
				For(y, nr){
					single[rr[j].pos[0]][y][j+1] = 0;
					single[y][rr[j].pos[1]][j+1] = 0;
				}
				ros[rr[j].pos[0]][j+1] = 0;
				col[rr[j].pos[1]][j+1] = 0;

				sudo[rr[j].pos[0]][rr[j].pos[1]] = j+1;
				For(k, nr){
					single[rr[j].pos[0]][rr[j].pos[0]][k+1] = 0;
				}
			}
		}
	}
}


void init(){
	for(int i = 0; i < nr; i++)
    	for(int j = 0; j < nr; j++)
    		cin >> sudo[i][j];

    For(i,nr){
    	For(j,nr){
    		ros[i][j+1] = 1;
    		col[i][j+1] = 1;
    		// For(k,nr){
    		// 	single[i][j][k+1] = 1;
    		// }
    	}
    }
    For(i,nr){
    	For(j,nr){
    		For(k,nr){
    			single[i][j][k+1]=0;
    		}
    	}
    }
}

void show(){
	cout << endl << endl;
	for(int i = 0; i < nr; i++){
    	for(int j = 0; j < nr; j++)
    		cout << sudo[i][j] << " ";
    	cout << endl;
    }

    cout << "ros and col: " << endl;

    For(i,nr){
    	cout << "row " << i << ": ";
    	For(j,nr){
    		if(ros[i][j+1])
    			cout << j+1 << " ";
    	}
 		cout << "\t\t" << endl;
    }

    cout << endl;

    For(i,nr){
    	cout << "col " << i << ": ";
    	For(j,nr){
    		if(col[i][j+1])
    			cout << j+1 << " ";
    	}
 		cout << "\t\t" << endl;
    }

    cout << endl;

    For(i,nr){
    	For(j,nr){
    		cout << i << " " << j << ": ";
    		For(k,nr){
    			if(single[i][j][k+1])
    				cout << k+1 << " ";
    		}
    		cout << "\t\t\t";
    	}
    	cout << endl;
    }
    cout << endl;
}


void lister(){
	
	// show();
	stabilize();
	For(i,nr){
		For(j,nr){
			if(sudo[i][j]!=0){
				ros[i][sudo[i][j]] = 0;
				col[j][sudo[i][j]] = 0;
			}
		}
	}

	For(i,nr){
		For(j,nr){
			if(sudo[i][j] != 0)
				continue;
			vector<int> a, b;
			For(k,nr){
				if(ros[i][k+1])
					a.push_back(k+1);
				if(col[j][k+1])
					b.push_back(k+1);
			}
			auto c = intersection(a,b);

			cout << "intersection at "<< i << " " << j << "  of: ";
			for(auto t : a)
				cout << t << " ";
			cout << "and ";
			for(auto t : b)
				cout << t << " ";
			cout << "is ";

			for(auto t : c)
				cout << t << " ";
			cout << endl;
			

			if(c.size() == 1){
				sudo[i][j] = c[0];
				cout << c[0] << " has been filled at: " << i << ", " << j << "by intersection" << endl;
				For(y, nr){
					single[i][y][c[0]] = 0;
					single[y][j][c[0]] = 0;
				}
				ros[i][c[0]] = 0;
				col[j][c[0]] = 0;


				For(u,nr)
					single[i][j][u+1] = 0;
				// For(qw,nr){
			 //    	For(wq,nr){
			 //    		cout << qw << " " << wq << ": ";
			 //    		For(w,nr){
			 //    			if(single[qw][wq][w+1])
			 //    				cout << w+1 << " ";
			 //    		}
			 //    		cout << "\t\t\t";
			 //    	}
			 //    	cout << endl;
			 //    }
			 //    cout << endl;
			}
			else{
				For(u,nr)
					single[i][j][u+1] = 0;
				for(auto t : c){
					single[i][j][t] = 1;
				}
			}
		}
	}

	// For(i,nr){
 //    	For(j,nr){
 //    		int counter = 0;
 //    		For(k,nr){
 //    			if(single[i][j][k+1])
 //    				counter++;
 //    		}
 //    		if(counter == 1){
 //    			For(k,nr){
	//     			if(single[i][j][k+1]){
	//     				sudo[i][j] = k+1;
	//     				For(y, nr){
	// 						single[i][y][k+1] = 0;
	// 						single[y][j][k+1] = 0;
	// 					}
	// 					ros[i][k+1] = 0;
	// 					col[j][k+1] = 0;

	//     				break;
	//     			}
	//     		}
 //    		}
 //    	}
 //    }

	show();
	rowinter();
	colinter();
	show();
}

void count(){
	int c = 0;
	For(i,nr){
		For(j,nr){
			if(sudo[i][j] == 0)
				c++;
		}
	}
	cout << "still empty: " << c << endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	cout << "hello" << endl;
    init();
    show();
    count();
    
    cout << validatorOfSudoku() << endl;

  	// solve the sudo 
  	show();
  	count();
  	lister();
    show();
    

    count();
  	lister();
    show();
    count();

    lister();
    show();
    count();

    lister();
    show();
    count();

    lister();
    show();
    count();
 	return 0;
}
