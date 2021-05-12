#include "drink.h"

// getters
std::string Drink::getName() const
{
	 return m_name;
}

std::string Drink::getType() const
{
	 return m_type;
}

float Drink::getPrice() const
{
	 return m_price;
}

bool Drink::isCarbonated() const
{
	 return m_carbonated;
}

bool Drink::isAlcoholic() const
{
	 return m_alcoholic;
}

//setters
void Drink::setName(std::string name)
{
	 this->m_name = name;
}

void Drink::setType(std::string type)
{
	 this->m_type = type;
}

void Drink::setPrice(float price)
{
	 this->m_price = price;
}

void Drink::setCarbonation(bool carbonated)
{
	 this->m_carbonated = carbonated;
}
void Drink::setAlcoholic(bool alcoholic)
{
	 this->m_alcoholic = alcoholic;
}
