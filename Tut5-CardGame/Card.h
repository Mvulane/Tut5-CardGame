#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
using namespace std;

class Card
{
public:
	Card(string d, int n);
	string colour();
	int number();
	void print();	

private:
	string detail;
	int numb;

};

#endif // !CARD_H

