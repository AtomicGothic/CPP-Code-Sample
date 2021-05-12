#include "juice.h"

//constructor
Juice::Juice(std::string juiceName, float juicePrice, std::string fruit)
{
	 this->m_ofFruit = fruit;
	 setName(juiceName);
	 setType("juice");
	 setPrice(juicePrice);
	 setAlcoholic(false);
	 setCarbonation(false);
}

//getters
std::string Juice::getFruit() const
{
	 return m_ofFruit;
}

int Juice::getAlcoholPercentage() const
{
	 return m_alcoholPercentage;
}

bool Juice::isDiet() const
{
	 return m_Diet;
}

//setters
void Juice::setFruit(std::string fruit)
{
	 this->m_ofFruit = fruit;
}

void Juice::setAlcoholPercentage(int percentage)
{
	 this->m_alcoholPercentage = percentage;
}

void Juice::setDiet(bool diet)
{
	 this->m_Diet = diet;
}