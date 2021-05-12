#include "player.h"

//constructor
Player::Player(float startingMoney)
{
	 this->m_playerMoney = startingMoney;
}

//getters
float Player::getPlayerMoney() const
{
	 return m_playerMoney;
}

//setters
void Player::setPlayerMoney(float startingMoney)
{
	 this->m_playerMoney = startingMoney;
}