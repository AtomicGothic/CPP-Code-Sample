#pragma once
#include "drink.h"

class Soda : public virtual Drink
{
private:
	 std::string m_ofFruit;
	 int m_alcoholPercentage;
	 bool m_Diet;
public:
	 Soda(std::string sodaName, float sodaPrice, bool diet);

	 //getters
	 std::string getFruit() const override;
	 int getAlcoholPercentage() const override;
	 bool isDiet() const override;

	 //setters
	 void setFruit(std::string fruit) override;
	 void setAlcoholPercentage(int percentage) override;
	 void setDiet(bool diet) override;
};