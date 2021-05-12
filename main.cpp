#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "player.h"
#include "drink.h"
#include "soda.h"
#include "beer.h"
#include "juice.h"

void tellStory(std::vector<Drink*>* drinkMenu, Player *player);

/**********************************
* main()
* Entry function.
**********************************/
int main()
{
	 Player player = Player(20.00);
	 Beer budweiser = Beer("Budweiser", 3.00, 5);
	 Soda pepsi = Soda("Pepsi", 1.99, false);
	 Juice orangeJuice = Juice("Orange Juice", 2.99, "orange");

	 std::vector<Drink*> drinkMenu = { &budweiser, &pepsi, &orangeJuice };

	 tellStory(&drinkMenu, &player);

	 return 0;
}

/**********************************
* tellStory()
* Offers the narrative.
**********************************/
void tellStory(std::vector<Drink*> *drinkMenu, Player *player)
{
	 std::cout << "\"You've traveled far from home. The land before you and behind has not seen the hand of man in many generations. It seems like you lived a dream from which you're finally waking up.\n"
		  << "\nOr perhaps this is now the dream? What isn't a dream you know for certain is your parched throat. You need this quenched soon. You travel a bit more and come across an isolated, sleepy town.\n"
		  << "\nYou walk into this time-capsule of a town and enter a small pub. You're greeted by a patient bar maided with a contagious smile. Her eyes are shrouded by the brow of her hat.\n"
		  << "\n'You're a welcome sight. Few come this way anymore. I'll be happy to serve you a drink hon if you're thristy.'\"\n"
		  << "1) Ask about this town.\n"
		  << "2) Ask to look at the menu.\n"
		  << "> ";

	 int response = 0;
	 
	 //only two options for the narrative
	 while (response != 1 && response != 2)
	 {
		  std::cin >> response;
	 }

	 if (response == 1)
	 {
		  std::cout << "\nWith a sly grin and a light chuckle, the bar maiden says 'Oh, there isn't much to tell sugar. We've kept to ourselves for many years, serving the few lone wanderers who come our way.'\n"
				<< "She hands you a short menu 'Let me know if I can give you something to drink hon.'\n";
	 }
	 else
	 {
		  std::cout << "\nPromptly, with graceful hands, she hands you a short menu. 'I don't have much, but what I have is good. You let me know what you want hon.'\n";
	 }

	 std::cout << "\nYou pick up the menu, flatten out the creases, and peruse.\n";

	 // loop through the drink menu and display the menu neatly.
	 for (int i = 0; i < drinkMenu->size(); i++)
	 {
		  std::cout << std::endl << drinkMenu->at(i)->getName() << " - $" << drinkMenu->at(i)->getPrice();
		  
		  //is the drink carbonated or not?
		  if (drinkMenu->at(i)->isCarbonated())
		  {
				std::cout << "\n Carbonated.";
		  }
		  else
		  {
				std::cout << "\n Not carbonated.";
		  }

		  //is the drink a juice?
		  if (drinkMenu->at(i)->getType() == "juice")
		  {
				std::cout << "\n Made from " << drinkMenu->at(i)->getFruit();
		  }

		  //does the drink have aclohol?
		  if (drinkMenu->at(i)->isAlcoholic())
		  {
				std::cout << "\n " << drinkMenu->at(i)->getAlcoholPercentage() << "%";
		  }
	 }
	 
	 //option really doesn't matter for the sake of the written narrative
	 int drinkDesire = 0;
	 std::cout << "\n\nWhich drink do you want?\n";
	 for (int i = 0; i < drinkMenu->size(); i++)
	 {
		  std::cout << (i + 1) << ") " << drinkMenu->at(i)->getName() << std::endl;
	 }
	 std::cout << "> ";
	 std::cin >> drinkDesire;

	 std::cout << "Having made your choice, you offer the $" << player->getPlayerMoney() << " that was in your pocket and hand it to the enigmous woman. She gives you your drink,\n"
		  << "your change, and her unchanging smile. With your thirst quenched, you leave without another word.\n"
		  << "The bar maiden says as you leave 'Thank you sugar for your patronage. Return again if you visit.' Maybe you'll return, if only for that smile.\n";
}