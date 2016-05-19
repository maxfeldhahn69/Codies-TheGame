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


	int menu0 = 0;

	cout << "Codies: The Game" << endl;
	cout << "By: Max" << endl;


	cout << "Welcome... choose your class." << endl;
	cout << "1.) Knight: 100 HP 50 STA 5 DMG" << endl;
	cout << "2.) Dex Beast: 50 HP 100 STA 8 DMG" << endl;
	cout << "3.) Steve from Minecraft: 75 HP 75 STA 7 DMG" << endl;
	cout << "4.) Newt: 50 HP 50 STA 12 DMG " << endl;
	cout << "Don't like the classes? Input cheatcodes instead!" << endl;
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
	if (temp == 3){
		a.setMaxHealth(75);
		a.setHealth(75);
		a.setMaxStamina(75);
		a.setStamina(75);
		a.setLevel(1);
		a.setDamage(7);
		b.setSchmeebs(20);
	}
	if (temp == 4){
		a.setMaxHealth(50);
		a.setHealth(50);
		a.setMaxStamina(50);
		a.setStamina(50);
		a.setLevel(1);
		a.setDamage(12);
		b.setSchmeebs(20);
	}
	if (temp == 69){
		a.setMaxHealth(69);
		a.setHealth(69);
		a.setMaxStamina(69);
		a.setStamina(69);
		a.setLevel(1);
		a.setDamage(69);
		b.setSchmeebs(69);
		cout << "Secret Troll Class!" << endl;
	}
	if (temp == 13){
		a.setMaxHealth(25);
		a.setHealth(25);
		a.setMaxStamina(1000);
		a.setStamina(1000);
		a.setLevel(1);
		a.setDamage(100);
		b.setSchmeebs(20);
		cout << "Secret Nightmare Class!" << endl;
	}
	if (temp == 666){
		a.setMaxHealth(666);
		a.setHealth(666);
		a.setMaxStamina(666);
		a.setStamina(666);
		a.setLevel(1);
		a.setDamage(666);
		b.setSchmeebs(666);
		cout << "Secret Herobrine Class!" << endl;
	}
	if (temp == 1010){
		a.setMaxHealth(10000);
		a.setHealth(10000);
		a.setMaxStamina(100);
		a.setStamina(100);
		a.setLevel(20);
		a.setDamage(15);
		b.setSchmeebs(999);
		cout << "Secret Beta-Tester Class!" << endl;
	}
	
	do{
		if (a.getLevel()<1){
			cout << "THAT IS NOT A CLASS!" << endl;
			cout << "YOU LOSE!!!!!!!!!" << endl;
			system("pause");
			return;
		}
		if (b.getWeaponDmg()>0){
			a.setDamage(a.getDamage() + b.getWeaponDmg());
		}
		cout << "Health: " << a.getHealth() << " | Stamina: " << a.getStamina() << " | Level: " << a.getLevel() << " | Schmeebs: " << b.getSchmeebs() << endl;
		cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
		cout << endl;
		cout << "Your goal is to cure the world of the Codies TM virus!" << endl;
		cout << endl;
		cout << "Protip#1: If you go bankrupt, you lose!" << endl;
		cout << "Protip#2: Make sure to sleep at the bed to regain health!" << endl;
		cout << "Where would you like to go?" << endl;
		cout << "1.) Home" << endl;
		cout << "2.) Battle" << endl;
		cout << "3.) Exit" << endl;
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
				if (b.getSchmeebs() < 0){
					cout << "You have gone BANKRUPT!" << endl;
					cout << "YOU LOSE!" << endl;
					system("pause");
					return;
				}
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
						cout << "Schmeebs: " << b.getSchmeebs() << endl;
						cout << "1.) Dagger - Schmeebs : 15 " << endl; // +2
						if (value >= 5){
							cout << "2.) Rusty Sword - Schmeebs : 25 " << endl; // +10
						}
						if (value >= 10){
							cout << "3.) Semi-Rusty Sword - Schmeebs : 35 " << endl; // +20
						}
						if (value >= 15){
							cout << "4.) Great Sword - Schmeebs : 45 " << endl; // +50
						}
						if (value == 20){
							cout << "5.) Hotdog - Schmeebs : 100 " << endl; // +100
						}
						cout << "6.) Leave" << endl;

						cin >> purchase;
						b.setPurchase(purchase);
						switch (b.getPurchase()){
						case 1:
							b.setWeaponName("Dagger");
							b.setWeaponDmg(2);
							b.setSchmeebs(b.getSchmeebs() - 15);
							break;
						case 2:
							b.setWeaponName("Rusty Sword");
							b.setWeaponDmg(10);
							b.setSchmeebs(b.getSchmeebs() - 25);
							break;
						case 3:
							b.setWeaponName("Semi-Rusty Sword");
							b.setWeaponDmg(20);
							b.setSchmeebs(b.getSchmeebs() - 35);
							break;
						case 4:
							b.setWeaponName("Great Sword");
							b.setWeaponDmg(50);
							b.setSchmeebs(b.getSchmeebs() - 45);
							break;
						case 5:
							b.setWeaponName("Hotdog");
							b.setWeaponDmg(100);
							b.setSchmeebs(b.getSchmeebs() - 100);
							break;
						case 6:
							break;
						}
					}
					if (temp == 2){
						int value;
						int purchase;
						value = a.getLevel();
						cout << "Items available for purchase: " << endl;
						cout << "1.) Sombrero - Schmeebs : 25 " << endl; // +25
						if (value >= 5){
							cout << "2.) Chain Armor Set - Schmeebs : 50 " << endl; // +50
						}
						if (value >= 10){
							cout << "3.) Iron Armor Set - Schmeebs : 100 " << endl; // +100
						}
						if (value >= 15){
							cout << "4.) Plate Armor Set - Schmeebs : 200 " << endl; // +200
						}
						if (value == 20){
							cout << "5.) Dragon Armor Set - Schmeebs : 400 " << endl; // +400
						}
						cout << "6.) Leave" << endl;

						cin >> purchase;
						b.setPurchase(purchase);
						switch (b.getPurchase()){
						case 1:
							b.setArmorName("Sombrero");
							a.setMaxHealth(a.getMaxHealth() + 25);
							a.setHealth(a.getMaxHealth());
							b.setSchmeebs(b.getSchmeebs() - 25);
							break;
						case 2:
							b.setArmorName("Chain Armor Set");
							a.setMaxHealth(a.getMaxHealth() + 50);
							a.setHealth(a.getMaxHealth());
							b.setSchmeebs(b.getSchmeebs() - 30);
							break;
						case 3:
							b.setArmorName("Iron Armor Set");
							a.setMaxHealth(a.getMaxHealth() + 100);
							a.setHealth(a.getMaxHealth());
							b.setSchmeebs(b.getSchmeebs() - 40);
							break;
						case 4:
							b.setArmorName("Plate Armor Set");
							a.setMaxHealth(a.getMaxHealth() + 200);
							a.setHealth(a.getMaxHealth());
							b.setSchmeebs(b.getSchmeebs() - 55);
							break;
						case 5:
							b.setArmorName("Dragon Armor Set");
							a.setMaxHealth(a.getMaxHealth() + 400);
							a.setHealth(a.getMaxHealth());
							b.setSchmeebs(b.getSchmeebs() - 65);
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

					if (temp == 1){
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
						} while (c.getmonsterHealth() > 0);
						cout << "Congrats! You killed a dummy!" << endl;
						cout << "You got 2 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 2);
						break;
						}
					if (temp == 2){
						if (b.getSchmeebs() > 30){
							cout << "You get nothing!" << endl;
							cout << endl;
							break;
						}

						else{
							b.setSchmeebs(b.getSchmeebs() + 1);
							cout << "ONE SCHMEEB ADDED TO YOUR INVENTORY!!!" << endl;
							break;
						}
					}
					if (temp == 3){
						char boss1;
						cout << "Are you sure you want to fight the boss? y/n" << endl;
						cin >> boss1;
						if (a.getDamage() <= 6){
							cout << "It is physically impossible for you to kill the boss with " << a.getDamage() << " damage." << endl;
							cout << "Go buy something." << endl;
							break;
						}
						c.setmonsterHealth(200);
						do{
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());

							cout << "Master Dummy HP is " << c.getmonsterHealth() << endl;
							cout << "Attack? y/n" << endl;
							char option;
							cin >> option;
							cout << "Too bad! Fight him anyway!" << endl;

						} while (c.getmonsterHealth() > 0);
						cout << "Congratz!! You have been rewarded with 50 Schmeebs, and advanced to level 5!" << endl;
						b.setSchmeebs(b.getSchmeebs() + 50);
						if (a.getLevel() < 5){
							a.setLevel(5);
							a.setHealth(a.getHealth() * a.getLevel());
							a.setMaxHealth(a.getMaxHealth() * a.getLevel());
							a.setStamina(a.getStamina() * a.getLevel());
							a.setMaxStamina(a.getMaxStamina() * a.getLevel());
							a.setDamage(a.getDamage()*a.getLevel());
						}
						else{
							cout << "You are already level 5 silly!" << endl;
						}
						break;
					}
						if (temp == 4){
							break;
						}
					
				case 2:if (a.getLevel() < 5){
						   cout << "Sorry, You cannot be here." << endl;
						   break;
				}
					cout << "Welcome to the Forest!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Attempt to fight the boss!" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp == 1){
						c.setmonsterHealth(250);
						c.setmonsterMaxHealth(250);
						c.setmonsterDamage(50);
						temp = 0;

						do{
							char choice;
							cout << "Gnome Health: " << c.getmonsterHealth() << endl;
							cout << "Gnome Damage: " << c.getmonsterDamage() << endl;
							cout << "Your Health: " << a.getHealth() << endl;
							cout << "Your Damage: " << a.getDamage() << endl;
							cout << "Do you want to attack? y/n" << endl;
							cin >> choice;
							if (choice = 'n'){
								break;
							}
							else{
							
								c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
								a.setHealth(a.getHealth() - c.getmonsterDamage());
								cout << "You did " << a.getDamage() << " damage." << endl;
								cout << "You have " << a.getHealth() << " health left." << endl;

								if (a.getHealth() <= 0){
									cout << "You DIED!" << endl;
									cout << "GAME OVER" << endl;
									system("pause");
									return;
								}
							}
						} while (c.getmonsterHealth() > 0);
						cout << "Congrats! You killed a dwarf!" << endl;
						cout << "You got 10 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 10);
						break;
					}
					if (temp == 2){

						if (b.getSchmeebs() > 50){
							cout << "You get nothing!" << endl;
							cout << endl;
							break;
						}
						else{
							(b.setSchmeebs(b.getSchmeebs() + 2));
							cout << "Two Schmeebs added to your inventory!" << endl;
							cout << endl;
							break;
						}
					}

					if (temp == 3){
						char boss2;
						cout << "The Dwarf King has appeared." << endl;
						cout << "Would you like to fight him? y/n" << endl;
						cin >> boss2;
						if (boss2 == 'y'){

							c.setmonsterHealth(2000);
							c.setmonsterDamage(25);

							do{
								temp = 0;
								cout << "Player Health: " << a.getHealth() << endl;
								cout << "Player Stamina: " << a.getStamina() << endl;
								cout << "Dwarf King Health: " << c.getmonsterHealth() << endl;
								cout << "Dwarf King Damage: " << c.getmonsterDamage() << endl;
								cout << "1.) Attack" << endl;
								cout << "2.) Retreat" << endl;
								cin >> temp;
								if (temp == 1){

									if (a.getHealth() <= 0){
										cout << "You died..." << endl;
										cout << "GAME OVER." << endl;
									}

									c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
									a.setHealth(a.getHealth() - c.getmonsterDamage());
									a.setStamina(a.getStamina() - 5);

									if (a.getStamina() < 0){
										cout << "You cannot attack!" << endl;
										cout << "You MUST retreat!(-200HP)" << endl;
										a.setHealth(a.getHealth() - 200);
										break;
										if (a.getHealth() <= 0){
											cout << "You died..." << endl;
											cout << "GAME OVER." << endl;
											system("pause");
											return;
										}
									}
								}
								if (temp == 2){
									break;
								}

							} while (c.getmonsterHealth() > 0);
							if (c.getmonsterHealth() < 0){
								cout << "Congratz!! The Dwarf King is DEAD!" << endl;
								cout << "You have been advanced to level 8!" << endl;

								b.setSchmeebs(b.getSchmeebs() + 100);
								if (a.getLevel() < 8){
									a.setLevel(8);
									a.setHealth(a.getHealth() * a.getLevel());
									a.setMaxHealth(a.getMaxHealth() * a.getLevel());
									a.setStamina(a.getStamina() * a.getLevel());
									a.setMaxStamina(a.getMaxStamina() * a.getLevel());
									a.setDamage(a.getDamage()*a.getLevel());
								}
								else{
									cout << "You are already level 8 silly!" << endl;
								}
								break;
							}
							
						}
		
						else{
							cout << "Wimp" << endl;
							break;
						}
					}
						if (temp = 4){
							break;
						}
				case 3: if (a.getLevel() < 8){
						   cout << "Sorry, You cannot be here." << endl;
						   break;
				}
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
				case 4:if (a.getLevel() < 12){
						   cout << "Sorry, You cannot be here." << endl;
						   break;
				}
					cout << "Welcome to the cave!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Attempt to fight the boss" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp = 2){
						if (b.getSchmeebs() > 90){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else{
							(b.setSchmeebs(b.getSchmeebs() + 4));
								cout << "Four Schmeebs added to your inventory!" << endl;
						}
					}
						if (temp = 4){
							break;
						}
				case 5:if (a.getLevel() < 15){
						   cout << "Sorry, You cannot be here." << endl;
							   break;
				}
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
			
					if (menutemp == 3){
							cout << "GOODBYE!!" << endl;
							system("pause");
							return;
					}
					}
					
					} while (menutemp != 3);
					
						
					
				}