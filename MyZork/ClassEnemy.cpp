#include "ClassEnemy.h"

Enemy::Enemy(const char* name, const char* description, int position) : Creature(name, description, position)
{
	fighting = false;
	state = 0;
}

Enemy::~Enemy()
{

}