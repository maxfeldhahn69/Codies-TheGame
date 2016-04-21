#pragma once
#include <string>
#include <iostream>

class Items{
private: 
	string dagger;
	string rusty_sword;
	string straight_sword;
	string great_sword;
	string stick;
	string leather_armor;
	string chain_armor;
	string plate_armor;

public: void setDaggerDmg(int dd){
			dagger = dd;
}
		void setRustyDmg(int rsd){
			rusty_sword = rsd;
		}
		void setStraightDmg(int ssd){
			straight_sword = ssd;
		}
		void setGreatDmg(int gsd){
			great_sword = gsd;
		}
		void setStickDmg(int sd){
			stick = sd;
		}
		void setLeatherProtection(int lp){
			leather_armor = lp;
		}
};