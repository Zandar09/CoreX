#define EXAMPLE 0
#if EXAMPLE == 1

#include "corex/glfw/glfw.h"

int main()
{
	CoreX::GLFW::Window Window;
	Window.Initialize("Demo GLFW");

	while (!Window.ShouldClose())
	{
		Window.EventHandler();

		Window.SwapBuffers();
	}
	return 0;
}
#endif