#pragma once
#include <iostream>
#include <string>


class Monster{
private:
	string monster;
	int monsterMaxHealth;
	int monsterDamage;
public:
	void setmonsterMaxHealth(int mmh){
		monsterMaxHealth = mmh;
	}
	void setmonsterDamage(int md){
		monsterDamage = md;
	}
	int getmonsterMaxHealth(){
		return monsterMaxHealth;
	}
	int getmonsterDamage(){
		return monsterDamage;
	}

};