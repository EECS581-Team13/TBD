// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>
using namespace std;
/**
 * 
 */
class STRIKERR_API Team
{
public:
	Team();
	string GetName ();
	string GetAbbreviation();
	~Team();

private:
	//name, abbreviation, list of players, money owned, etc...
};
