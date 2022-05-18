#pragma once 
#include "system/point_light_system.hpp"
#include "system/simple_render_system.hpp"
#include "lve_window.hpp"

#include "lve_descriptors.hpp"
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

       private:
           LveWindow lveWindow{ WIDTH,HEIGHT,"Hello Vulakn" };
           LveDevice lveDevice{ lveWindow };
  
           LveRenderer lveRenderer{ lveWindow, lveDevice };
           std::unique_ptr<LveDescriptorPool> globalPool{};
           LveGameObject::Map gameObjects;
           //LvePipeline LvePipeline{ lveDevice, "./shaders/simple_shader.vert.spv", "./shaders/simple_shader.frag.spv" };
    };
}