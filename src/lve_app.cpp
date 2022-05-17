#include "lve_app.hpp"
#include<GLFW/glfw3.h>
#include <chrono>
#include "lve_frame_info.hpp"
using namespace lve;

void FirstApp::run()
{

    auto currentTime = std::chrono::high_resolution_clock::now();
	while (!glfwWindowShouldClose(lveWindow.window))
	{
        glfwPollEvents();

        drawFrame();
        
	}

}

void lve::FirstApp::drawFrame()
{
    uint32_t imageIndex;
    auto result = swapChain_.acquireNextImage(&imageIndex);
    if (result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR) {
        throw std::runtime_error("failed to acquire swap chain image!");
    }

    result = swapChain_.submitCommandBuffers(&commandBuffers_[imageIndex], &imageIndex);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("failed to present swap chain image!");
    }
}



   FirstApp::FirstApp()
   {

   }


      FirstApp::~FirstApp()
   {
	   
   }


