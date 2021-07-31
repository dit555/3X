#include <iostream>

using std::cout;
using std::endl;


int curr_max; //keeps trck of maximum steps

struct Num{
	int start; //holds starting numbers
	int cur; //current number
	int step; //step number	
};

void calc(struct Num n){
	if (n.cur == 1){
		cout << n.start << "," << n.step <<  endl;
		if (n.step > curr_max) curr_max = n.step;

	}
	else{
		if (n.cur % 2 == 0) n.cur /= 2;
		else n.cur = n.cur * 3 + 1;
		n.step++;
		//cout << n.cur << ' ';
		calc(n);
	}

}

int main(){

	struct Num n;
	curr_max = 0;
	cout << "starting number,steps" << endl;
	for (int i = 1; i <= 113382; i++){ 
		n.start = i;
		n.cur = n.start;
		n.step = 0;
		calc(n);
	}
	cout << "max steps:," << curr_max << endl;
	return 0;
}
