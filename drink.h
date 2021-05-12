#pragma once
#include<iostream>
#include<string>

class Drink
{
private:
	 std::string m_name;
	 std::string m_type;
	 float m_price;
	 bool m_carbonated;
	 bool m_alcoholic;
public:
	 //constructor and destructor
	 Drink() {};
	 virtual ~Drink() {};

	 // getters
	 std::string getName() const;
	 std::string getType() const;
	 float getPrice() const;
	 bool isCarbonated() const;
	 bool isAlcoholic() const;
	 virtual bool isDiet() const = 0;
	 virtual int getAlcoholPercentage() const = 0;
	 virtual std::string getFruit() const = 0;

	 //setters
	 void setName(std::string name);
	 void setType(std::string type);
	 void setPrice(float price);
	 void setCarbonation(bool carbonated);
	 void setAlcoholic(bool alcoholic);
	 virtual void setDiet(bool diet) = 0;
	 virtual void setAlcoholPercentage(int percentage) = 0;
	 virtual void setFruit(std::string fruit) = 0;

};