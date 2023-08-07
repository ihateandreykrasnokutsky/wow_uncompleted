#pragma once
#include <string>
#include "p11_const_names.h"

class wow_npc
{
public:
	void set_name(std::string name)
	{
		npc_name = name;

		if (npc_name == wolf)
		{
			npc_type = beast;
			npc_health = 45;
			npc_damage = -2;
		}
		else if (npc_name == boar)
		{
			npc_type = beast;
			npc_health = 53;
			npc_damage = -2;
		}
		else if (npc_name == plainstrider)
		{
			npc_type = beast;
			npc_health = 55;
			npc_damage = -2;
		}
	}
	std::string ret_name()
	{
		return npc_name;
	}
	int ret_health()
	{
		return npc_health;
	}
	std::string ret_type()
	{
		return npc_type;
	}
	void ch_health(int number)
	{
		npc_health = npc_health + number;
	}
	int ret_damage()
	{
		return npc_damage;
	}
private:
	std::string npc_name;
	std::string npc_type;
	int npc_health;
	int npc_damage;
	std::string ab1;
	std::string ab2;
	std::string ab3;
	std::string ab4;
};