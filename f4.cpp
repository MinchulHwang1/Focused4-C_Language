/*
* FILE : f4.cpp
* PROJECT : focused 4
* PROGRAMMER : Minchul Hwang
* FIRST VERSION : 2023-03-10
* Description : This project is understand about vector.
				Get words as a string from user, and sorting it as ascending order when the words are gotten.
				and then search the word through vector.
* The functions in this file are nothing
*/
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define kContinue				1
#define kZeroValue				0

using namespace std;

int main() {
	
	vector<string> v;								// Declare the vector to save string.
	vector<string>::iterator iter;
	// Get words as a string until user input '.'
	while (kContinue) {
		cout << "Insert the word : ";
		string strToStore;

		cin >> strToStore;
		if (strToStore == ".")
			break;

		v.push_back(strToStore);
		sort(v.begin(), v.end());			// Soritng vector as ascending order
	}
	
	cout << endl;
	// Search the word as a string until user input '.'
	while (kContinue) {
		cout << "Insert the word you want to find :";
		string strToFind;
		cin >> strToFind;
		if (strToFind == ".")
			break;

		for (iter = v.begin(); iter != v.end(); iter++) {
			if (strToFind == *iter) {
				cout << "Success!" << endl << endl;
				break;
			}
		
			if (iter == v.end()-1) {
				cout << "Not there!" << endl << endl;
				break;
			}
		}
	}

	while (v.size() > kZeroValue) {
		v.pop_back();
	}
	return 0;
}
