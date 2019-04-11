﻿#pragma once
#include "../../Structures/Screen.h"
#include "../Ally.h"
#include "../Enemy.h"

#define MAX_STAMINA 120

struct PlayerSound
{
    sf::SoundBuffer shoot;
    sf::SoundBuffer reload;
};

class Player : public Ally
{
	int damage;
    int ammo;
    int stamina;
    PlayerSound player_sound;

	unsigned move_flood_control[2];
public:
	const static int max_health = 200;

	Player();
	~Player();

    void shoot(List<Enemy>& enemies);
    void reload();
    void move(float, float, List<Unit>&, bool);

	int get_ammo();
	int get_stamina();
};
