#include <iostream>
#include <ctime> // Needed for the true randomization, without it it's no fun!
#include <cstdlib> 
using namespace std;
//random fandom lol im so random!!
int main()
{
	int loop = 1;

	int xRan;
	srand(time(0)); // This will ensure a really randomized number by help of time, and codes lol
	while (loop != 0) {
		xRan = rand() % 1000 + 1; // Randomizing the number between 1-15.
		cout << "Shows a random number between 1-15: " << xRan << endl;
		//the show starts here!
		switch (xRan) {
		case 1:
			cout << "I have one soldatin(soldier in german,that's how it's pronounced!)\n";
			//the one, NEO!!!!
			break;
		case 2:
			cout << "get the f*ck outta here!\n";
			//dos, deux, due, e
			break;
		case 3:
			cout << "third time is a charm!\n";
			break;
		case 4:
			cout << "number four, where's the ninja turtles?\n";
			break;
		case 5:
			cout << "I spy with my little eye, something beginning with five";
			//-hey 5, how are you?
			//=I'm five!
			//-wait, what?
			break;
		case 6:
			cout << "want to know how to abuse a number? well, take 6 as an example\n take the \"i\" from the word and replace it with \"e\", " 
				<< "\n and go to the bathroom or bed, don't ask why.\n";
			break;
		case 7:
			cout << "the magic word!\n";
			break;
		case 8:
			cout << "the eternal number, don't have a clue? just make the 8 sleep, and all hell will break loose!\n";
			break;
		case 9:
			cout << "NEIN!!";
			//...that was Hitler
			break;
		case 10:
			cout << "finally 10, give that man a cookie! courtsey of Vladimir Putin\n";
			//10's an ordinary number, 
			break;
		case 11:
			cout << "an ordinary number, really what did you expect?\n";
			break;
		case 12:
			cout << "you close your eyes, repeat 6 two times, and add them, then voila\n";
			break;
		case 13:
			cout << "the misunderstood number, because of a coincidence that made it the unlucky number, sucks to be it!\n";
			//also because it means death in Japanese
			break;
		case 14:
			cout << "another ordinary number!\n";
			// what's 7 x 2?
			break;
		case 15:
			cout << "the last number in the program, not in the existence!\n";
			//and last but certainly not least
			break;
		case 69:
			cout <<
		}
		cout << "enter 0 to quit: ";
		cin >> loop;
		//remember the int loop; upstairs? there's where it's used
	}
	return 0; //again with the poor zero that has to return, why wouldn't it just stop?
}

