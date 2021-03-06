#pragma once
#include <SFML/Graphics.hpp>

extern sf::RenderWindow window;
extern sf::View view;

namespace OverBar
{

	enum color
	{
		empty,
		blue,
		green,
		red
	};

	class bar
	{
		sf::Sprite itself;
		sf::Sprite background;
		float percentage;
		color col;
		int height = 28;
		int width = 206;

	public:
		bar();
		bar(color);
		~bar();

		void set_color(color);
		void set_percentage(float);
		void set_position(float, float);
		void set_width(float);

		color get_color();
		float get_percentage();

		void draw_in(sf::RenderWindow&);
	};
};