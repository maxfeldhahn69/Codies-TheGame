#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include "Stats.h"
#include "Game.h"
#include "Items.h"
#include "Monster.h"

using namespace std;

void Game::run(){
	Stats a;
	Items b;
	Monster c;
	int temp;
	int menutemp;
	int hometemp;
	ifstream f;
	ofstream of;


	int menu0 = 0;

	cout << "Codies: The Game" << endl;
	cout << "By: Chase & Max" << endl;
	cout << "What would you like to do?" << endl;
	cout << "1.) New Game" << endl;
	cout << "2.) Load Game" << endl;
	cin >> menu0;

	switch (menu0){
	case 1:
		int save;
		cout << "Choose a save file" << endl;
		cout << "Save 1" << endl;
		cout << "Save 2" << endl;
		cout << "Save 3" << endl;
		cin >> save;

		if (save == 1){
			of.open("save1.txt", ios::out || ios::trunc);

		}
		if (save == 2){
			of.open("save2.txt", ios::out || ios::trunc);
		}
		if (save == 3){
			of.open("save3.txt", ios::out || ios::trunc);
		}
		break;
	case 2:
		string saveFile;
		cout << "Choose your save file (saveX): ";
		cin >> saveFile;
		f.open(saveFile);
		break;

	}

	cout << "Welcome... choose your class." << endl;
	cout << "1.) Warrior: 100 HP 50 STA" << endl;
	cout << "2.) Rogue: 50 HP 100 STA" << endl;
	cout << endl;
	cin >> temp;
	if (temp == 1){
		a.setMaxHealth(100);
		a.setHealth(100);
		a.setMaxStamina(50);
		a.setStamina(50);
		a.setLevel(1);
		a.setDamage(5);
		b.setSchmeebs(20);
	}
	if (temp == 2){
		a.setMaxHealth(50);
		a.setHealth(50);
		a.setMaxStamina(100);
		a.setStamina(100);
		a.setLevel(1);
		a.setDamage(8);
		b.setSchmeebs(20);
	}
	if (temp == 1010){
		a.setMaxHealth(99999);
		a.setHealth(99999);
		a.setMaxStamina(99999);
		a.setStamina(99999);
		a.setLevel(20);
		a.setDamage(999);
		b.setSchmeebs(999);
	}

	do{
		cout << "Health: " << a.getHealth() << " | Stamina: " << a.getStamina() << " | Level: " << a.getLevel() << " | Schmeebs: " << b.getSchmeebs() << endl;
		cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << endl;
		cout << endl;
		a.setDamage(a.getDamage() + b.getWeaponDmg());
		cout << "1.) Home" << endl;
		cout << "2.) Battle" << endl;
		cout << "3.) Exit" << endl;
		cout << "4.) Save" << endl;
		menutemp = 0;
		cin >> menutemp;
		for (int i = 0;; i++){


			// HOME
			if (menutemp == 1){
				cout << "HOME" << endl;
				cout << "1.) Shop" << endl;
				cout << "2.) Sleep" << endl;
				cout << "3.) Exit" << endl;
				hometemp = 0;
				cin >> hometemp;
				if (hometemp == 1){
					cout << "What would you like to buy?" << endl;
					cout << "1.) Weapons" << endl;
					cout << "2.) Armor" << endl;
					cout << "3.) Exit" << endl;
					temp = 0;
					cin >> temp;

					// SHOP
					if (temp == 1){
						int value;
						int purchase;
						value = a.getLevel();
						cout << "Items available for purchase: " << endl;
						cout << "1.) Dagger" << endl; // +2
						if (value > 5){
							cout << "2.) Rusty Sword" << endl; // +4
						}
						if (value > 10){
							cout << "3.) Straight Sword" << endl; // +6
						}
						if (value > 15){
							cout << "4.) Great Sword" << endl; // +8
						}
						if (value == 20){
							cout << "5.) Stick" << endl; // +10
						}
						cout << "6.) Leave" << endl;

						cin >> purchase;
						b.setPurchase(purchase);
						switch (b.getPurchase()){
						case 1:
							b.setWeaponName("Dagger");
							b.setWeaponDmg(2);
							break;
						case 2:
							b.setWeaponName("Rusty Sword");
							b.setWeaponDmg(4);
							break;
						case 3:
							b.setWeaponName("Straight Sword");
							b.setWeaponDmg(6);
							break;
						case 4:
							b.setWeaponName("Great Sword");
							b.setWeaponDmg(8);
							break;
						case 5:
							b.setWeaponName("Stick");
							b.setWeaponDmg(10);
							break;
						case 6:
							break;
						}
					}
					// END SHOP


					// SLEEP
					if (hometemp == 2){
						a.setHealth(a.getMaxHealth());
						cout << "Your health has been restored!" << endl;
					}
					// END SLEEP

				}
				if (hometemp == 3){
					break;
				}
				// END HOME


			}


			if (menutemp == 2){
				cout << "Where would you like to battle?" << endl;
				cout << "1.) Training (1 - 5)" << endl;
				cout << "2.) Forest (5 - 8)" << endl;
				cout << "3.) Desert (8 - 12)" << endl;
				cout << "4.) Cave (12 - 15)" << endl;
				cout << "5.) Castle (15 - 20)" << endl;
				cout << "6.) Exit" << endl;
				cout << endl;
				int location = 0;
				cin >> location;
				switch (location){
				case 1:
					cout << "Welcome to the training area!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Attempt to fight the boss!" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;

					if (temp = 1){
						c.setmonsterHealth(20);
						c.setmonsterMaxHealth(20);
						temp = 0;

						do{
							char choice;
							cout << "Dummy Health: " << c.getmonsterHealth() << endl;
							cout << "Do you want to attack? y/n" << endl;
							cin >> choice;
							if (choice == 'n'){
								break;
							}
							else{
									c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());

								cout << "You did " << a.getDamage() << " damage." << endl;
							}
						} while (c.getmonsterHealth() >= 0);
						cout << "Congrats! You killed a dummy!" << endl;
						cout << "You got 2 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 2);
						break;
						}
					if (temp = 2){
						if (b.getSchmeebs() > 30){
							cout << "You get nothing!" << endl;
							cout << endl;
							break;
						}
						else{
							b.setSchmeebs(b.getSchmeebs() + 1);
							cout << "ONE SCHMEEB ADDED TO YOUR INVENTORY!!!" << endl;
						}
						if (temp = 3){
							char boss1;
							cout << "Are you sure you want to fight the boss? y/n" << endl;
							cin >> boss1;
							cout << "Too bad! Fight him anyway!" << endl;
							c.setmonsterHealth(0);
							c.setmonsterHealth(200);
							cout << "Master Dummy HP is " << c.getmonsterHealth() << endl;
						}
				
						if (temp = 4){
							break;
						}
					}
				case 2:
					cout << "Welcome to the forest!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp = 2){
						if (b.getSchmeebs() > 50){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 2));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
						if (temp = 3){
							break;
						}
				case 3:
					cout << "Welcome to the desert!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp = 2){
						if (b.getSchmeebs() > 70){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 3));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
						if (temp = 3){
							break;
						}
				case 4:
					cout << "Welcome to the cave!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp = 2){
						if (b.getSchmeebs() > 90){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 4));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
						if (temp = 3){
							break;
						}
				case 5:
					cout << "Welcome to the castle!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp = 2){
						if (b.getSchmeebs() > 110){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 5));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
						if (temp = 3){
							break;
						}

					}
					if (location == 6){
						break;
					}
					}


					}
					} while (menutemp != 3);
				}