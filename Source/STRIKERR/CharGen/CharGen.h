// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>

using namespace std;

/**
 * 
 */
class STRIKERR_API CharGen {
private:
	//attributes that affect gameplay
	int height;			//(inches) Resistance to being hit by other players
	int strength;		// How far you can knock the ball
	int grit;			// How far you can knock other players
	int endurance;		// How far a player can travel
	int accuracy;		// How straight you can kick a ball
	int coord;			// Coordination : Resistance to injury
	int age;			// Time until retirement
	// int powerup;		//TODO: implement later
	int facialFeat;		// Value between -1 and 1 to randomly generate facial features

	//cosmetic attributes
	string name;
	string desc;	// Player description

	void setHeight();
	void setStrength();
	void setGrit();
	void setEndurance();
	void setAccuracy();
	void setCoord();
	void setAge();
	void setFacial();

	void setName();
	void setDesc();

public:
	CharGen();
	~CharGen();

	int getHeight();
	int getStength();
	int getGrit();
	int getEndurance();
	int getAccuracy();
	int getCoord();
	int getAge();
	int getFacial();

	string getName();
	string getDesc();
};
