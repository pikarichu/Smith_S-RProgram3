// S&RProgram3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

	vector<string> x = {};
	//string lines[64];
	ifstream inFile1;
	inFile1.open("DataFile1.txt");
	string line;
	while (getline(inFile1, line))
	{
		x.push_back(line);
		//cout << line << endl;
	}

	ifstream inFile2;
	inFile1.close();
	inFile2.open("DataFile2.txt");
	while (getline(inFile2, line))
	{
		x.push_back(line);
		//cout << line << endl;
	}
	inFile2.close();
	std::sort(x.begin(), x.end());

	ofstream outFile;
	outFile.open("CombinedData.txt");

	for (auto i : x) {
		cout << i << endl;
		outFile << i << endl;
	}






}

