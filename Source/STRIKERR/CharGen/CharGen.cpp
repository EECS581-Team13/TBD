// Fill out your copyright notice in the Description page of Project Settings.

#include "CharGen.h"
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

CharGen::CharGen() {
	setHeight();
	setStrength();
	setGrit();
	setEndurance();
	setAccuracy();
	setCoord();
	setAge();
	setName();
	setDesc();
	setFacial();
	srand(time(NULL));
}

CharGen::~CharGen() {

}

//Resistance to being hit by other players
void CharGen::setHeight() {
	//Generate height as number of inches between 60 (5 feet) and 84 (7 feet)
	height = (rand() % 24) + 60;

	//Should we display as feet and inches instead of just inches?


}

//How far you can kick the ball
void CharGen::setStrength() {
	//Generate strength as a number between 0 and 99
	strength = rand() % 100;
}

//How far you can knock other players
void CharGen::setGrit() {
	//Generate grit as a number between 0 and 99
	grit = rand() % 100;
}

//How far you can travel
void CharGen::setEndurance() {
	//Generate endurance as a number between 0 and 99
	endurance = rand() % 100;
}

//How accurately you can kick the ball
void CharGen::setAccuracy() {
	//Generate accuracy as a number between 0 and 99
	accuracy = rand() % 100;
}

//Resistance to injury
void CharGen::setCoord() {
	//Generate coordination as anumber between 0 and 99
	coord = rand() % 100;
}

//Number of years until retirement
void CharGen::setAge() {
	//Generate age as a number between 2 and 12 (years until retirement)
	age = (rand() % 11) + 2;

}

void CharGen::setName() {
	//Randomly generate from a list of names

	//Read in first names
	std::ifstream inFile("C:\\Users\\Demo\\Documents\\School\\Spring 2019\\EECS 582\\strikerr-charGen\\strikerr-charGen\\firstNames.txt");
	//inFile.open("C:\Users\Demo\Documents\School\Spring 2019\EECS 582\strikerr-charGen\strikerr-charGen\firstNames.txt");
	string firstNames[100];
	int count = 0;
	string a;
	while (getline(inFile, a)) {
		firstNames[count] = a;
		count++;
	}
	int randNo = rand() % count;
	string firstName = firstNames[randNo];

	//Read in last names
	std::ifstream inFile2;
	inFile2.open("C:\\Users\\Demo\\Documents\\School\\Spring 2019\\EECS 582\\strikerr-charGen\\strikerr-charGen\\lastNames.txt");
	string lastNames[100];
	count = 0;
	while (getline(inFile2, a)) {
		lastNames[count] = a;
		count++;
	}
	randNo = rand() % count;
	string lastName = lastNames[randNo];

	name = firstName + " " + lastName;


}

void CharGen::setDesc() {
	//Create description based on randomly generated adjectives that fill in blanks

	//Read in list of adjectives
	std::ifstream inFile("C:\\Users\\Demo\\Documents\\School\\Spring 2019\\EECS 582\\strikerr-charGen\\strikerr-charGen\\adjectives.txt");
	//inFile.open("C:\Users\Demo\Documents\School\Spring 2019\EECS 582\strikerr-charGen\strikerr-charGen\firstNames.txt");
	string adjectives[100];
	int count = 0;
	string a;
	while (getline(inFile, a)) {
		adjectives[count] = a;
		count++;
	}

	//Randomly select three different adjectives to describe the player
	//Create array of three adjectives
	string adjSelected[3];
	int randNo = 0;
	for (int i = 0; i < 3; i++) {
		randNo = rand() % count;
		adjSelected[i] = adjectives[randNo];
	}

	//Fill in description with adjectives
	//TODO:
	desc = "A " + adjSelected[0] + " player, " + getName() + " is known for being " + adjSelected[1] + " and " + adjSelected[2] + ".\n";

	
}

void CharGen::setFacial() {
	//Randomly generate # between -1 and 1 to generate random facial features
	facialFeat = (rand() % 3) - 1;

}

int CharGen::getHeight() {
	return height;
}

int CharGen::getStength() {
	return strength;
}

int CharGen::getGrit() {
	return grit;
}

int CharGen::getEndurance() {
	return endurance;
}

int CharGen::getAccuracy() {
	return accuracy;
}

int CharGen::getCoord() {
	return coord;
}

int CharGen::getAge() {
	return age;
}

string CharGen::getName() {
	return name;
}

string CharGen::getDesc() {
	return desc;
}

int CharGen::getFacial() {
	return facialFeat;
}