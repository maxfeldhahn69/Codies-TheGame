#include <iostream>
#include <string>
#pragma once

class Stats{
public:
	void setDamage(int d){
		damage = d;
	}
	void setMaxHealth(int mh){
		MaxHealth = mh;
	}
	void setMaxStamina(int ms){
		MaxStamina = ms;
	}
	void setLevel(int l){
		level = l;
	}
	void setStamina(int s){
		stamina = s;
	}
	void setHealth(int h){
		health = h;
	}
	int getDamage(){
		return damage;
	}
	int getHealth(){
		return health;
	}
	int getStamina(){
		return stamina;
	}
	int getLevel(){
		return level;
	}
	int getMaxHealth(){
		return MaxHealth;
	}
	int getMaxStamina(){
		return MaxStamina;
	}
private:
	int health;
	int stamina;
	int MaxHealth;
	int MaxStamina;
	int level;
	int damage;
};