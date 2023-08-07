//trying class, WoW 
#include <iostream>
#include "p11_character.h"
#include "p11_npc.h"
#include "p11_const_names.h"
#include "p11_music.h"

int main()
{
	playWowMainTheme();
	wow_chr chr;//creating a character
	std::cout << "Enter a WoW character's name: ";
	std::string ch_name;
	std::cin >> ch_name;
	chr.set_name(ch_name);
	std::cout << "Enter character's class: ";
	std::string ch_class;
	std::cin >> ch_class;
	chr.set_class(ch_class);
	std::cout << "Your character is " << chr.ret_class() << " " << chr.ret_name() << '.' << std::endl;
	std::cout << "Health: " << chr.ret_health() << ", " << "mana: " << chr.ret_mana() << ", " << "rage: " << chr.ret_rage() << ", " << "energy: " << chr.ret_energy() << ".\n";
	
	wow_npc npc1;//creating a npc
	playAggroSound();
	srand(time(NULL));
	int npc_number = rand()%100+1;
	if (npc_number >= 1 and npc_number < 33) npc1.set_name(wolf);//random npc
	else if (npc_number >= 33 and npc_number < 66) npc1.set_name(boar);
	else if (npc_number >= 66 and npc_number < 99) npc1.set_name(plainstrider);

	std::cout << "You see a " << npc1.ret_name() <<'.'<< std::endl;
	while (chr.ret_health() > 0 and npc1.ret_health() > 0)//fight
	{
		std::cout<< "Choose your ability.\n" << std::endl;
		std::cout << "(1) " << chr.ret_ab1() << ", (2) " << chr.ret_ab2() << ", (3) " << chr.ret_ab3() << ".\n";
		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			if (chr.ret_ab1() == heroic_strike or //usual damaging spells
				chr.ret_ab1() == cleave or        //combat log txt format is "chr's spell hits npc for n damage", cleave is not usual, will fix it later
				chr.ret_ab1() == shadow_bolt or
				chr.ret_ab1() == searing_pain or
				chr.ret_ab1() == lightning_bolt or
				chr.ret_ab1() == earth_shock or
				chr.ret_ab1() == sinister_strike or
				chr.ret_ab1() == eviscerate)
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " hits " << npc1.ret_name() << " for " << -chr.ret_ab1_damage() << " damage.\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				npc1.ch_health(chr.ret_ab1_damage());
				chr.ch_health(npc1.ret_damage());
				chr.ch_rage(chr.ret_ab1_rage());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_energy(chr.ret_ab1_energy());
			}
			else if (chr.ret_ab1() == intimidating_shout) //fear spells, "chr uses spell. npc runs away in fear"
			{
				std::cout << chr.ret_name() << " uses " << chr.ret_ab1() << ". " << npc1.ret_name() << " runs away in fear.\n";
				npc1.ch_health(-2);
			}
			else if (chr.ret_ab1() == life_tap) // life tap. "chr uses life tap. chr loses n health and gains n mana"
			{
				std::cout << chr.ret_name() << " uses " << chr.ret_ab1() << ". " << chr.ret_name() << " loses " << -life_tap_health << " health and gains " << life_tap_mana << " mana.\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				chr.ch_health(chr.ret_ab1_health());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_health(npc1.ret_damage());
			}
			else if (chr.ret_ab1() == healing_wave) //healing spells. "chr's healing spell heals chr for n health".
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " heals " << chr.ret_name() << " for " << chr.ret_ab1_health() << ".\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				chr.ch_health(chr.ret_ab1_health());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_health(npc1.ret_damage());
			}
			else if (chr.ret_ab1() == gouge)//damage=>incapacitate for a short time
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " hits " << npc1.ret_name() << " for " << -chr.ret_ab1_damage() << ". " << npc1.ret_name() << " is incapaciteted.\n";
				npc1.ch_health(chr.ret_ab1_damage());
				chr.ch_energy(chr.ret_ab1_energy());
			}
			break;
		case 2:
#define ret_ab1_damage() ret_ab2_damage()
#define ret_ab1_health() ret_ab2_health()
#define ret_ab1_rage() ret_ab2_rage()
#define ret_ab1_mana() ret_ab2_mana()
#define ret_ab1_energy() ret_ab2_energy()
#define ret_ab1() ret_ab2()
			if (chr.ret_ab1() == heroic_strike or //usual damaging spells
				chr.ret_ab1() == cleave or        //combat log txt format is "chr's spell hits npc for n damage", cleave is not usual, will fix it later
				chr.ret_ab1() == shadow_bolt or
				chr.ret_ab1() == searing_pain or
				chr.ret_ab1() == lightning_bolt or
				chr.ret_ab1() == earth_shock or
				chr.ret_ab1() == sinister_strike or
				chr.ret_ab1() == eviscerate)
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " hits " << npc1.ret_name() << " for " << -chr.ret_ab1_damage() << " damage.\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				npc1.ch_health(chr.ret_ab1_damage());
				chr.ch_health(npc1.ret_damage());
				chr.ch_rage(chr.ret_ab1_rage());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_energy(chr.ret_ab1_energy());
			}
			else if (chr.ret_ab1() == intimidating_shout) //fear spells, "chr uses spell. npc runs away in fear"
			{
				std::cout << chr.ret_name() << " uses " << chr.ret_ab1() << ". " << npc1.ret_name() << " runs away in fear.\n";
				npc1.ch_health(-2);
			}
			else if (chr.ret_ab1() == life_tap) // life tap. "chr uses life tap. chr loses n health and gains n mana"
			{
				std::cout << chr.ret_name() << " uses " << chr.ret_ab1() << ". " << chr.ret_name() << " loses " << -life_tap_health << " health and gains " << life_tap_mana << " mana.\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				chr.ch_health(chr.ret_ab1_health());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_health(npc1.ret_damage());
			}
			else if (chr.ret_ab1() == healing_wave) //healing spells. "chr's healing spell heals chr for n health".
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " heals " << chr.ret_name() << " for " << chr.ret_ab1_health() << ".\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				chr.ch_health(chr.ret_ab1_health());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_health(npc1.ret_damage());
			}
			else if (chr.ret_ab1() == gouge)//damage=>incapacitate for a short time
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " hits " << npc1.ret_name() << " for " << -chr.ret_ab1_damage() << ". " << npc1.ret_name() << " is incapaciteted.\n";
				npc1.ch_health(chr.ret_ab1_damage());
				chr.ch_energy(chr.ret_ab1_energy());
			}
			break;
		case 3:
#define ret_ab2_damage() ret_ab3_damage()
#define ret_ab2_health() ret_ab3_health()
#define ret_ab2_rage() ret_ab3_rage()
#define ret_ab2_mana() ret_ab3_mana()
#define ret_ab2_energy() ret_ab3_energy()
#define ret_ab2() ret_ab3()
			if (chr.ret_ab1() == heroic_strike or //usual damaging spells
				chr.ret_ab1() == cleave or        //combat log txt format is "chr's spell hits npc for n damage", cleave is not usual, will fix it later
				chr.ret_ab1() == shadow_bolt or
				chr.ret_ab1() == searing_pain or
				chr.ret_ab1() == lightning_bolt or
				chr.ret_ab1() == earth_shock or
				chr.ret_ab1() == sinister_strike or
				chr.ret_ab1() == eviscerate)
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " hits " << npc1.ret_name() << " for " << -chr.ret_ab1_damage() << " damage.\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				npc1.ch_health(chr.ret_ab1_damage());
				chr.ch_health(npc1.ret_damage());
				chr.ch_rage(chr.ret_ab1_rage());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_energy(chr.ret_ab1_energy());
			}
			else if (chr.ret_ab1() == intimidating_shout) //fear spells, "chr uses spell. npc runs away in fear"
			{
				std::cout << chr.ret_name() << " uses " << chr.ret_ab1() << ". " << npc1.ret_name() << " runs away in fear.\n";
				npc1.ch_health(-2);
			}
			else if (chr.ret_ab1() == life_tap) // life tap. "chr uses life tap. chr loses n health and gains n mana"
			{
				std::cout << chr.ret_name() << " uses " << chr.ret_ab1() << ". " << chr.ret_name() << " loses " << -life_tap_health << " health and gains " << life_tap_mana << " mana.\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				chr.ch_health(chr.ret_ab1_health());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_health(npc1.ret_damage());
			}
			else if (chr.ret_ab1() == healing_wave) //healing spells. "chr's healing spell heals chr for n health".
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " heals " << chr.ret_name() << " for " << chr.ret_ab1_health() << ".\n";
				std::cout << npc1.ret_name() << " hits " << chr.ret_name() << " for " << -npc1.ret_damage() << " damage.\n";
				chr.ch_health(chr.ret_ab1_health());
				chr.ch_mana(chr.ret_ab1_mana());
				chr.ch_health(npc1.ret_damage());
			}
			else if (chr.ret_ab1() == gouge)//damage=>incapacitate for a short time
			{
				std::cout << chr.ret_name() << "'s " << chr.ret_ab1() << " hits " << npc1.ret_name() << " for " << -chr.ret_ab1_damage() << ". " << npc1.ret_name() << " is incapaciteted.\n";
				npc1.ch_health(chr.ret_ab1_damage());
				chr.ch_energy(chr.ret_ab1_energy());
			}
			break;
		}
		
		std::cout<<std::endl;
		std::cout << chr.ret_name() << "'s resources. " << "Health: " << chr.ret_health() << ", " << "mana: " << chr.ret_mana() << ", " << "rage: " << chr.ret_rage() << ", " << "energy: " << chr.ret_energy() << ". \n";
		std::cout << npc1.ret_name() << "'s resources. " << "Health: " << npc1.ret_health() << '.' << std::endl;
	}
	if (chr.ret_health() > 0 and npc1.ret_health() <= 0) std::cout << npc1.ret_name() << " is dead. You won!" << std::endl;
	else if (chr.ret_health()<=0) std::cout << chr.ret_name() << " is dead. You lost." << std::endl;
	
	std::cout<<std::endl;
	std::cout << "Enter any symbol to exit: "; int a; std::cin >> a; if (a) return 0;
}