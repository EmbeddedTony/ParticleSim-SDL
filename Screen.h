#pragma once

#include <SDL.h>

namespace steinsgate {
	class Screen {
	public:
		const static int SCREEN_WIDTH = 900;
		const static int SCREEN_HEIGHT = 480;
	private: 
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32* m_buffer;
	public:
		Screen();
		bool init();
		void update();
		void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
		bool processEvents();
		void close();


	};

}