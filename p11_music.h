#pragma once
#include <Windows.h>
#include <mmsystem.h>
#pragma comment (lib, "winmm.lib")

void playWowMainTheme()
{
	PlaySound(TEXT("wow2.wav"), NULL, SND_ASYNC|SND_NOSTOP);
}

//wolf sounds
void playAggroSound()
{
	PlaySound(TEXT("mWolfAggro3.wav"), NULL, SND_ASYNC|SND_NOSTOP);
}
