#pragma once 

#include "lve_window.hpp"
#include "lve_pipeline.hpp"
#include "lve_device.hpp"
#include "lve_renderer.hpp"
namespace lve 
{
    class FirstApp
    {


       public:
       FirstApp();
       ~FirstApp();
       static constexpr int WIDTH = 800;
       static constexpr int HEIGHT = 600;

       void run();
       void drawFrame();
       private:
           LveWindow lveWindow{ WIDTH,HEIGHT,"Hello Vulakn" };
           LveDevice lveDevice{ lveWindow };
           LveSwapChain swapChain_{ window_, device_ };
           LvePipeline pipeline_{ lveDevice, "./shaders/simple_shader.vert.spv", "./shaders/simple_shader.frag.spv", device_, swapChain_ };

           LveRenderer lveRenderer{ lveWindow, lveDevice };
           std::vector<VkCommandBuffer> commandBuffers_;
           //LvePipeline LvePipeline{ lveDevice, "./shaders/simple_shader.vert.spv", "./shaders/simple_shader.frag.spv" };
    };
}