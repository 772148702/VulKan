#include "lve_app.hpp"
#include<GLFW/glfw3.h>

using namespace lve;

void FirstApp::run()
{
	
	while (!glfwWindowShouldClose(lveWindow.window))
	{
        glfwPollEvents();
	}



}
   FirstApp::FirstApp()
   {

   }


      FirstApp::~FirstApp()
   {
	   
   }