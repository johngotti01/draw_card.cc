#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

void getSuit(int suit);
void getFace(int face);

int main(int argc, char* argv[]) {

 srand(time(NULL));
 int suit = (rand() % 4+1);
 int face = (rand() % 13); 

	getFace(face);
	cout << " " ;
	getSuit(suit);
	cout << endl;
	return 0;
}

void getSuit(int suit){
	if(suit == 1){
 	 	cout << "Clubs";
	}else if (suit == 2){
 		cout << "Spades";
	}else if (suit == 3){
  		cout << "Hearts";
	}else{
  		cout << "Diamonds";
	}
}

void getFace(int face){
	if (face == 0){
 		cout <<"ace";
	}else if (face >= 1 && face <= 10){
  		cout << face;
	}else if (face == 11){
		cout << "Jack";
	}else if (face == 12){
		cout << "Queen";
	}else if (face == 13){
  		cout <<"King";
	}
}


