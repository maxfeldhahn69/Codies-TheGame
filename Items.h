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

public: void setDagger(int dd){
			dagger = dd;
			dd = 5;
}
		void setRusty(int rsd){
			rusty_sword = rsd;
			rsd = 10;
		}
		void setStraight(int ssd){
			straight_sword = ssd;
			ssd = 15;
		}
		void setGreat(int gsd){
			great_sword = gsd;
			gsd = 25;
		}
		void setStick(int sd){
			stick = sd;
			sd = 999;
		}
		void setLeather(int la){
			leather_armor = la;
			la = 10;
		}
		void setChain(int ca){
			chain_armor = ca;
			ca = 20;
		}
		int getDagger(int dd){
			return dd;
		}
};