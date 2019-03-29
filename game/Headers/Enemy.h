﻿#pragma once
#include "Ally.h"

class Enemy
{
    float x;
    float y;
    int healt;
    float speed;
    int damage;
    Ally* focus; //Указатель на объект за которым следует противник

public:
    Enemy()
    {

    }
    ~Enemy()
    {

    }

    virtual void move(float x, float y) = 0;
    virtual void attack() = 0;
    virtual void draw() = 0;
    virtual void focus_change() = 0;
    virtual void death() = 0;
};
