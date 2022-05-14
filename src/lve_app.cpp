#include "lve_app.hpp"

using namespace lve;
void FirstApp::run()
{
	while (!lveWindow.shouldClose())
	{
        glfwPollEvents();
	}
}