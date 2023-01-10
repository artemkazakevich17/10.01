#include "settings.h"
#include "founctions.h"
#include "Header.h"
using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE
	);
	Bat bat;
	batInit(bat);
	//шарик
	CircleShape ball(ballRadius);
	CircleShape ball;
	ball.setRadius(ballRadius);
	ball.setFillColor(ballColor);
	ball.setPosition((WINDOW_WIDTH - 2 * ballRadius) / 2,
		(WINDOW_HEIGHT - 2 * ballRadius) / 2);
	//скорость
	float arr_speed[]{ -5.f, -4.f, -3.f, -2.f, -1.f, 1.f, 2.f, 3.f, 4.f, 5.f };
	float index = rand() % 15;
	float ball_speedx = arr_speed[index];
	while (window.isOpen())
	{
		checkEvents(window);
		updateGame();
		checkCollisions();
		window.draw(ball);
		drawGame(window);
	}
	
	return 0;
}