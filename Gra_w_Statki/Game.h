#pragma once

#include"SFML/Graphics.hpp"
#include"SFML/Window.hpp"
#include"SFML/System.hpp"
class Game
{
private:
	//Obiekt window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;

	//Obiekt event
	sf::Event ev;

	//Obiekty Gry
	sf::RectangleShape square;

	//Funkcje prywatne, wywo�ywane raz na pocz�tku gry
	void initializerVariables();
	void initWindow();

public:
	Game();
	~Game();

	bool running();

	void pollEvents();
	void update();
	void render();
};

