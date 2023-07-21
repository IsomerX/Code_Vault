<<<<<<< HEAD
#include "Stack.h"

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif

  Stack g;

	for(int i = 0; i < 30; i++){
		int temp;
		cin >> temp;
		g.push(temp);
	}
	g.display();

	return 0;
=======
#include "Stack.h"

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif

  Stack g;

	for(int i = 0; i < 30; i++){
		int temp;
		cin >> temp;
		g.push(temp);
	}
	g.display();

	return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}