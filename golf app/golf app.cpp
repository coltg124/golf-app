// golf app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int strokes;
	int par;
	int totalyards;
	int yardsleft;
	int score = 0;
	int yardshit;

	for (int i = 1; i < 19; ++i) {
		std::cout << "hole number: " << i << endl;
		std::cout << " par: ";
		std::cin >> par;
		std::cout << "  total yards: ";
		std::cin >> totalyards;
		while (totalyards != 0) {
			yardsleft = totalyards;
			cout << "yards hit: ";
			cin >> yardshit;
			totalyards = yardsleft - yardshit;
			std::cout << "yards left:" << totalyards << endl;
			if (yardsleft == 0) { std:cout << "record score" << endl; }
			else if (totalyards > 200) {std::cout << "recommended club: 3 wood" << endl; }
			else if (totalyards <= 200 && totalyards > 180) { std::cout << "recommened club: 4 iron"<<endl; }
			else if (totalyards <= 180 && totalyards > 160) { std::cout << "recommened club: 5 iron" << endl; }
			else if (totalyards <= 160 && totalyards > 140) { std::cout << "recommended club: 6 iron" << endl; }
			else if (totalyards <= 140 && totalyards > 120) { std::cout << "recommended club:7 iron" << endl; }
			else if (totalyards <= 120 && totalyards > 100) { std::cout << "recommended club:8 iron" << endl; }
			else if (totalyards <= 100 and totalyards > 5) { std::cout << "recommended club:9 iron" << endl; }
			else if (totalyards <= 5 && totalyards>0) { std::cout << "recommended club: putter" << endl; }
		}
		
			{
				if (totalyards == 0) {
					std::cout << "how many strokes: " << endl;
					std::cin >> strokes;
					score = score + strokes;
					std::cout << "score: " << score << endl;
					{

					}
				}
			}

		}

	}

	

					
						