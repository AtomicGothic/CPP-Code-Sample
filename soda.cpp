#include "soda.h"

Soda::Soda(std::string sodaName, float sodaPrice, bool diet)
{
	 this->m_Diet = diet;
	 setName(sodaName);
	 setType("soda");
	 setPrice(sodaPrice);
	 setAlcoholic(false);
	 setCarbonation(true);
}

//getters
std::string Soda::getFruit() const
{
	 return m_ofFruit;
}

int Soda::getAlcoholPercentage() const
{
	 return m_alcoholPercentage;
}

bool Soda::isDiet() const
{
	 return m_Diet;
}

//setters
void Soda::setFruit(std::string fruit)
{
	 this->m_ofFruit = fruit;
}

void Soda::setAlcoholPercentage(int percentage)
{
	 this->m_alcoholPercentage = percentage;
}

void Soda::setDiet(bool diet)
{
	 this->m_Diet = diet;
}
