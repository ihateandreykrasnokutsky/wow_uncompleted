#pragma once
#include <string>
#include "p11_const_names.h"

class wow_chr //chr's health, resources, class, abilities
{
public:
	//name. ret=return
	void set_name(std::string char_name)
	{
		chr_name = char_name;
	}
	std::string ret_name()
	{
		return chr_name;
	}
	//class
	void set_class(std::string char_class)
	{
		chr_class = char_class;
		if (chr_class == "warrior")
		{
			chr_health = warrior_health;
			chr_rage = warrior_rage;
			chr_mana = 0;
			chr_energy = 0;
			ab1 = heroic_strike;
			ab2 = cleave;
			ab3 = intimidating_shout;
			ab1_damage = heroic_strike_damage;
			ab2_damage = cleave_damage;
			ab3_damage = intimidating_shout_damage;
			ab0_damage = warrior_autoattack_damage;
			ab1_rage = heroic_strike_rage;
			ab2_rage = cleave_damage;
			ab3_rage = intimidating_shout_rage;
			ab0_rage = warrior_autoattack_rage;
			ab1_mana = 0;
			ab2_mana = 0;
			ab3_mana = 0;
			ab0_mana = 0;
			ab1_energy = 0;
			ab2_energy = 0;
			ab3_energy = 0;
			ab0_energy = 0;
			ab1_health = 0;
			ab2_health = 0;
			ab3_health = 0;
			ab0_health = 0;


			

		}
		else if (chr_class == "warlock")
		{
			chr_health = warlock_health;
			chr_rage = 0;
			chr_mana = warlock_mana;
			chr_energy = 0;
			ab1 = shadow_bolt;
			ab2 = searing_pain;
			ab3 = life_tap;
			ab1_damage = shadow_bolt_damage;
			ab2_damage = searing_pain_damage;
			ab3_damage = 0;
			ab0_damage = warlock_autoattack_damage;
			ab1_rage = 0;
			ab2_rage = 0;
			ab3_rage = 0;
			ab0_rage = 0;
			ab1_mana = shadow_bolt_mana;
			ab2_mana = searing_pain_mana;
			ab3_mana = life_tap_mana;
			ab0_mana = 0;
			ab1_energy = 0;
			ab2_energy = 0;
			ab3_energy = 0;
			ab0_energy = 0;
			ab1_health = 0;
			ab2_health = 0;
			ab3_health = life_tap_health;
			ab0_health = 0;
			
		}
		else if (chr_class == "shaman")
		{
			chr_health = shaman_health;
			chr_rage = 0;
			chr_mana = shaman_mana;
			chr_energy = 0;
			ab1 = lightning_bolt;
			ab2 = healing_wave;
			ab3 = earth_shock;
			ab1_damage = lightning_bolt_damage;
			ab2_damage = 0;
			ab3_damage = earth_shock_damage;
			ab0_damage = shaman_autoattack_damage;
			ab1_rage = 0;
			ab2_rage = 0;
			ab3_rage = 0;
			ab0_rage = 0;
			ab1_mana = lightning_bolt_mana;
			ab2_mana = healing_wave_mana;
			ab3_mana = earth_shock_mana;
			ab0_mana = 0;
			ab1_energy = 0;
			ab2_energy = 0;
			ab3_energy = 0;
			ab0_energy = 0;
			ab1_health = 0;
			ab2_health = healing_wave_health;
			ab3_health = 0;
			ab0_health = 0;
		}
		else if (chr_class == "rogue")
		{
			chr_health = rogue_health;
			chr_rage = 0;
			chr_mana = 0;
			chr_energy = rogue_energy;
			ab1 = sinister_strike;
			ab2 = eviscerate;
			ab3 = gouge;
			ab1_damage = sinister_strike_damage;
			ab2_damage = eviscerate_damage;
			ab3_damage = gouge_damage;
			ab0_damage = rogue_autoattack_damage;
			ab1_rage = 0;
			ab2_rage = 0;
			ab3_rage = 0;
			ab0_rage = 0;
			ab1_mana = 0;
			ab2_mana = 0;
			ab3_mana = 0;
			ab0_mana = 0;
			ab1_energy = sinister_strike_energy;
			ab2_energy = eviscerate_energy;
			ab3_energy = gouge_energy;
			ab0_energy = 0;
			ab1_health = 0;
			ab2_health = 0;
			ab3_health = 0;
			ab0_health = 0;
		}
		else if (chr_class == "priest")
		{
			chr_health = 4517;
			chr_rage = 0;
			chr_mana = 10137;
			chr_energy = 0;
		}
		else if (chr_class == "paladin")
		{
			chr_health = 5281;
			chr_rage = 0;
			chr_mana = 7477;
			chr_energy = 0;
		}
		else if (chr_class == "mage")
		{
			chr_health = 3240;
			chr_rage = 0;
			chr_mana = 5898;
			chr_energy = 0;
		}
		else if (chr_class == "hunter")
		{
			chr_health = 5147;
			chr_rage = 0;
			chr_mana = 4365;
			chr_energy = 0;
		}
		else if (chr_class == "druid")
		{
			chr_health = 5022;
			chr_rage = 0;
			chr_mana = 3844;
			chr_energy = 0;
		}

	}
	std::string ret_class()
	{
		return chr_class;
	}
	//resources. ch = change
	void ch_health(int number)
	{
		chr_health = chr_health + number;
	}
	void ch_rage(int number)
	{
		chr_rage = chr_rage + number;
	}
	void ch_mana(int number)
	{
		chr_mana = chr_mana + number;
	}
	void ch_energy(int number)
	{
		chr_energy = chr_energy + number;
	}
	int ret_health()
	{
		return chr_health;
	}
	int ret_rage()
	{
		return chr_rage;
	}
	int ret_mana()
	{
		return chr_mana;
	}
	int ret_energy()
	{
		return chr_energy;
	}
	//3 main abilities. ab = ability. cl = combat log. txt = text
	std::string ret_ab1()
	{
		return ab1;
	}
	std::string ret_ab2()
	{
		return ab2;
	}
	std::string ret_ab3()
	{
		return ab3;
	}
	std::string ret_ab0()
	{
		return ab0;
	}

	int ret_ab1_damage()
	{
		return ab1_damage;
	}
	int ret_ab1_rage()
	{
		return ab1_rage;
	}
	int ret_ab1_mana()
	{
		return ab1_mana;
	}
	int ret_ab1_energy()
	{
		return ab1_energy;
	}
	int ret_ab1_health()
	{
		return ab1_health;
	}
	int ret_ab2_damage()
	{
		return ab2_damage;
	}
	int ret_ab2_rage()
	{
		return ab2_rage;
	}
	int ret_ab2_mana()
	{
		return ab2_mana;
	}
	int ret_ab2_energy()
	{
		return ab2_energy;
	}
	int ret_ab2_health()
	{
		return ab2_health;
	}
	int ret_ab3_damage()
	{
		return ab3_damage;
	}
	int ret_ab3_rage()
	{
		return ab3_rage;
	}
	int ret_ab3_mana()
	{
		return ab3_mana;
	}
	int ret_ab3_energy()
	{
		return ab3_energy;
	}
	int ret_ab3_health()
	{
		return ab3_health;
	}
	int ret_ab0_damage()
	{
		return ab0_damage;
	}
	int ret_ab0_rage()
	{
		return ab0_rage;
	}
	int ret_ab0_mana()
	{
		return ab0_mana;
	}
	int ret_ab0_energy()
	{
		return ab0_energy;
	}
	int ret_ab0_health()
	{
		return ab0_health;
	}



private:
	std::string chr_name;
	std::string chr_class;
	int chr_health;
	int chr_rage;
	int chr_mana;
	int chr_energy;
	std::string ab1;//ability1 name
	std::string ab2;
	std::string ab3;
	std::string ab0;//ability 4 is for autoattack
	int ab1_damage;
	int ab2_damage;
	int ab3_damage;
	int ab0_damage;;//autoattack
	int ab1_rage;
	int ab2_rage;
	int ab3_rage;
	int ab0_rage;
	int ab1_mana;
	int ab2_mana;
	int ab3_mana;
	int ab0_mana;
	int ab1_energy;
	int ab2_energy;
	int ab3_energy;
	int ab0_energy;
	int ab1_health;//how much health [of the character] changes as a result of using of ability
	int ab2_health;
	int ab3_health;
	int ab0_health;
};
