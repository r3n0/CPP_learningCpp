#include <iostream>
#include <math.h>
using namespace std;

int main (){
	for (int i = 0; i < 40; i++ ){
		for (int j = 0; j < 80; j++){
			float r1 = rand() / (float) RAND_MAX;
			float r2 = rand() / (float) RAND_MAX; 
			r1 *= 5;
			r1 += (30 + j);
			if(r2 > (i / 40.0) || i > j || j > (80 - i)){
				r1 = ' ';
			}
			cout << (char) r1;
		}
		cout << endl;
	}
	return 0;
}
