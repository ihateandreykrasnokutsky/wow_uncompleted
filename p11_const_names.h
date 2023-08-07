#pragma once
#include <string>



//npc names
const std::string boar = "Boar";
const std::string wolf = "Wolf";
const std::string plainstrider = "Plainstrider";



//npc types
const std::string beast = "Beast";
const std::string humanoid = "Humanoid";



//classes' resources
// warrior
const int warrior_health = 60;
const int warrior_rage = 0;
//warlock
const int warlock_health = 73;
const int warlock_mana = 109;
//shaman
const int shaman_health = 80;
const int shaman_mana = 71;
//rogue
const int rogue_health = 45;
const int rogue_energy = 100;
//priest
const int priest_health = 82;
const int priest_mana = 145;



//abilities
//1 warrior
const std::string heroic_strike = "Heroic Strike"; //melee damage + 11, 15 rage
const int heroic_strike_damage = -11;
const int heroic_strike_rage = -15;
const std::string cleave = "Cleave"; //weapon damage+5 to target and a nearest ally, 20 rage
const int cleave_damage = -5;
const int cleave_rage = -20;
const std::string intimidating_shout = "Intimidating Shout"; //fear up to 5 targets, 25 rage
const int intimidating_shout_damage = 0;
const int intimidating_shout_rage = -25;
const int warrior_autoattack_damage = -5; //warrior autoattack, 5 damage
const int warrior_autoattack_rage = 3;
//2 warlock
const std::string shadow_bolt = "Shadow Bolt"; //15 damage, 25 mana
const int shadow_bolt_damage = -15;
const int shadow_bolt_mana = -25;
const std::string searing_pain = "Searing Pain"; //42 damage, 45 mana
const int searing_pain_damage = -42;
const int searing_pain_mana = -45;
const std::string life_tap = "Life Tap"; //-20 health and +20 mana
const int life_tap_damage = 0;
const int life_tap_mana = 20;
const int life_tap_health = -20; //amount of health that ability adds/removes
const int warlock_autoattack_damage = -2; //warlock autoattack, 2 damage
//3 shaman
const std::string lightning_bolt = "Ligtning Bolt"; //16 damage, 15 mana
const int lightning_bolt_damage = -16;
const int lightning_bolt_mana = -15;
const std::string healing_wave = "Healing Wave"; //41 health, 25 mana
const int healing_wave_mana = -25;
const int healing_wave_health = 41;
const std::string earth_shock = "Earth Shock"; //20 damage, 30 mana
const int earth_shock_damage = -20;
const int earth_shock_mana = -30;
const int shaman_autoattack_damage = -5;
//4 rogue
const std::string sinister_strike = "Sinister Strike"; //3 damage, 45 energy
const int sinister_strike_damage = -3;
const int sinister_strike_energy = -45;
const std::string eviscerate = "Eviscerate"; //28 damage, 35 energy
const int eviscerate_damage = -28;
const int eviscerate_energy = -35;
const std::string gouge = "Gouge"; //10 damage, 45 energy, incapacitate
const int gouge_damage = -10;
const int gouge_energy = -45;
const int rogue_autoattack_damage = -4;
//5 priest
const std::string smite = "Smite"; //17 damage, 20 mana
const int smite_damage = -17;
const int smite_mana = -20;
const std::string lesser_heal = "Lesser_Heal"; //52 healing, 20 mana
const int lesser_heal_health = 52;
const int lesser_heal_mana = -20;
const std::string shadow_word_pain = "Shadow Word: Pain"; //30 shadow damage over 18 sec, 25 mana. Change it to 3 dmg per each of 10 turns.
const int shadow_word_pain_damage = -3;
const int shadow_word_pain_initial_damage = 0;
const int shadow_word_pain_total_damage = 30;
const int shadow_word_pain_mana = -25;
const int priest_autoattack_damage = -3;

