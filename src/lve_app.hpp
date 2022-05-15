#pragma once 

#include "lve_window.hpp"
#include "lve_pipeline.hpp"
#include "lve_device.hpp"
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
      
       private:
           LveWindow lveWindow{ WIDTH,HEIGHT,"Hello Vulakn" };

           LveDevice lveDevice{ lveWindow };
           //LvePipeline LvePipeline{ lveDevice, "./shaders/simple_shader.vert.spv", "./shaders/simple_shader.frag.spv" };
    };
}