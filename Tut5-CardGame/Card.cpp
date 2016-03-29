#include<iostream>
#include"Card.h"
#include<stdexcept>
#include<string>
using namespace std;

Card::Card(string d, int n) {
	detail = d;
	numb = n;
}

string Card::colour() {
	return detail;
}

int Card::number() {
	int randomN;
	randomN = rand() % 10 + 1;
	numb = randomN;
	return numb;
}

void Card::print() {
	cout << "The card is " << number() << " and " << colour();
}