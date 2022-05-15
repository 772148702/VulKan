
#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve 
{
   
    class LveWindow 
    {
        friend class FirstApp;
        public:
        LveWindow(int w,int h,std::string name);
        ~LveWindow();
        LveWindow(const LveWindow&) = delete;
        LveWindow operator =(const LveWindow &) = delete;
        void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);
    private:
        static void framebufferResizeCallback(GLFWwindow* window, int width, int height);
        void initWindow();
        int width;
        int height;
        bool framebufferResized = true;
        std::string windowName;
        GLFWwindow * window;
    };
}
