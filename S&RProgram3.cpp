// S&RProgram3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program takes two files as input, goes through each line of both files, combines them,
// sorts them, and gives a sorted file as output.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{

	vector<string> x = {}; //array creation
	ifstream inFile1;
	inFile1.open("DataFile1.txt"); //opening the file
	string line;
	while (getline(inFile1, line)) // goes through each line in file 1
	{
		x.push_back(line); //adds to the array
		//cout << line << endl;
	}

	ifstream inFile2;
	inFile1.close();
	inFile2.open("DataFile2.txt"); //opening file 2
	while (getline(inFile2, line)) // goes through each line in file 2
	{
		x.push_back(line); // adds to the array
		//cout << line << endl;
	}
	inFile2.close();
	std::sort(x.begin(), x.end()); //sorts the array

	ofstream outFile;
	outFile.open("CombinedData.txt");

	for (auto i : x) { //goes through each line again
		cout << i << endl;
		outFile << i << endl; //adds it to a file
	}






}

