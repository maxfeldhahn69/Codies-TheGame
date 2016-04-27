#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include "Stats.h"
#include "Game.h"
#include "Items.h"

using namespace std;

void Game::run(){
	Stats a;
	int temp;
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
	}
	if (temp == 2){
		a.setMaxHealth(50);
		a.setHealth(50);
		a.setMaxStamina(100);
		a.setStamina(100);
		a.setLevel(1);
		a.setDamage(10);
	}
	if (temp == 1010){
		a.setMaxHealth(99999);
		a.setHealth(99999);
		a.setMaxStamina(99999);
		a.setStamina(99999);
		a.setLevel(1);
		a.setDamage(999);
	}

	do{
		cout << "Health: " << a.getHealth() << " | Stamina: " << a.getStamina() << " | Level: " << a.getLevel() << " | Damage: " << a.getDamage() << endl;
		cout << "1.) Home" << endl;
		cout << "2.) Battle" << endl;
		cout << "3.) Exit" << endl;
		cout << "4.) Save" << endl;
		int temp = 0;
		cin >> temp;
		for (int i = 0;; i++){

				if (temp == 1){
					cout << "HOME" << endl;
					cout << "1.) Shop" << endl;
					cout << "2.) Sleep" << endl;
					cout << "3.) Exit" << endl;
					temp;
					cin >> temp;
					if (temp == 1){
						cout << "What would you like to buy?" << endl;
						cout << "1.) Weapons" << endl;
						cout << "2.) Armor" << endl;
						cout << "3.) Exit" << endl;
						cin >> temp;
						if (temp == 1){
						}
						if (temp == 2){
						}
						if (temp == 3){
							break;
						}
					}
					if (temp == 2){
						a.setHealth(a.getMaxHealth());
						a.setStamina(a.getStamina());
					}
					if (temp == 3){
						break;
					}
				}

			if (temp == 2){
				cout << "Where would you like to battle?" << endl;
				cout << "1.) Training (1 - 5)" << endl;
				cout << "2.) Forest (5 - 8)" << endl;
				cout << "3.) Desert (8 - 12)" << endl;
				cout << "4.) Cave (12 - 15)" << endl;
				cout << "5.) Castle (15 - 20)" << endl;
				int location = 0;
				cin >> location;
				if (location == 1){
					temp = 0;
					cout << "Welcome to the Training Level NOOB!" << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.) Attack Dummy #1" << endl;
					cout << "2.) Attack Dummy #2" << endl;
					cout << "3.) Attack Dummy #3" << endl;
					cin >> temp;

				}
				if (location == 2){
					if (a.getLevel() < 5){
						cout << "Sorry, You cannot be here!" << endl;
					}
					else{
						cout << "Welcome to the Forest!" << endl;
					}
				}
				if (location == 3){
					if (a.getLevel() < 8){
						cout << "Sorry, You cannot be here!" << endl;
					}
					else{
						cout << "Welcome to the Desert!" << endl;
					}
				}
				if (location == 4){
					if (a.getLevel() < 12){
						cout << "Sorry, You cannot be here!" << endl;
					}
					else{
						cout << "Welcome to the Cave!" << endl;
					}
				}
			}
		}

		} while (temp != 3);
	}