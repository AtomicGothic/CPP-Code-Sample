#pragma once
#include "drink.h"

class Beer : public virtual Drink
{
private:
	 std::string m_ofFruit;
	 int m_alcoholPercentage;
	 bool m_Diet;
public:
	 Beer(std::string beerName, float beerPrice, int alcoholPerc);

	 //getters
	 std::string getFruit() const override;
	 int getAlcoholPercentage() const override;
	 bool isDiet() const override;

	 //setters
	 void setFruit(std::string fruit) override;
	 void setAlcoholPercentage(int percentage) override;
	 void setDiet(bool diet) override;
};