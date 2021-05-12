#include "beer.h"

Beer::Beer(std::string beerName, float beerPrice, int alcoholPerc)
{
	 this->m_alcoholPercentage = alcoholPerc;
	 setName(beerName);
	 setType("alcohol");
	 setPrice(beerPrice);
	 setAlcoholic(true);
	 setCarbonation(true);
}

//getters
std::string Beer::getFruit() const
{
	 return m_ofFruit;
}

int Beer::getAlcoholPercentage() const
{
	 return m_alcoholPercentage;
}

bool Beer::isDiet() const
{
	 return m_Diet;
}

//setters
void Beer::setFruit(std::string fruit)
{
	 this->m_ofFruit = fruit;
}

void Beer::setAlcoholPercentage(int percentage)
{
	 this->m_alcoholPercentage = percentage;
}

void Beer::setDiet(bool diet)
{
	 this->m_Diet = diet;
}
