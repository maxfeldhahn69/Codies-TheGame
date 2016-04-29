#pragma once
#include <iostream>
#include <string>


class Monster{
private:
	string monster;
	int monsterMaxHealth;
	int monsterDamage;
	int monsterHealth;
public:
	void setmonsterMaxHealth(int mmh){
		monsterMaxHealth = mmh;
	}
	void setmonsterHealth(int mh){
		monsterHealth = mh;
	}
	void setmonsterDamage(int md){
		monsterDamage = md;
	}
	int getmonsterMaxHealth(){
		return monsterMaxHealth;
	}
	int getmonsterHealth(){
		return monsterHealth;
	}
	int getmonsterDamage(){
		return monsterDamage;
	}

};