#pragma once
#include <string>

class Player
{
private:
	 float m_playerMoney;
public: 
	 Player(float startingMoney);
	 ~Player() {};

	 //getters
	 float getPlayerMoney() const;

	 //setters
	 void setPlayerMoney(float startingMoney);

};