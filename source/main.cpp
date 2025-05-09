#include <SFML/Window.hpp>

int main()
{
	sf::Window window {sf::VideoMode{{800, 600}}, "SFML Example Window"};
	window.setVerticalSyncEnabled(true);

	while (window.isOpen())
	{
		while (std::optional event {window.pollEvent()})
		{
			if (event->is<sf::Event::Closed>())
				window.close();
		}

		window.display();
	}

	return 0;
}
