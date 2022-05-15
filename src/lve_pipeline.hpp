#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include "vulkan/vulkan.h"
#include "lve_device.hpp"
namespace lve
{
    struct PipelineConfigInfo {
        PipelineConfigInfo() = default;
        PipelineConfigInfo(const PipelineConfigInfo&) = delete;
        PipelineConfigInfo& operator=(const PipelineConfigInfo&) = delete;

        std::vector<VkVertexInputBindingDescription> bindingDescriptions{};
        std::vector<VkVertexInputAttributeDescription> attributeDescriptions{};
        VkPipelineViewportStateCreateInfo viewportInfo;
        VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo;
        VkPipelineRasterizationStateCreateInfo rasterizationInfo;
        VkPipelineMultisampleStateCreateInfo multisampleInfo;
        VkPipelineColorBlendAttachmentState colorBlendAttachment;
        VkPipelineColorBlendStateCreateInfo colorBlendInfo;
        VkPipelineDepthStencilStateCreateInfo depthStencilInfo;
        std::vector<VkDynamicState> dynamicStateEnables;
        VkPipelineDynamicStateCreateInfo dynamicStateInfo;
        VkPipelineLayout pipelineLayout = nullptr;
        VkRenderPass renderPass = nullptr;
        uint32_t subpass = 0;
    };

    class LvePipeline
    {
        public:
        LvePipeline(LveDevice& device,const std::string& verPath, const std::string& fragPath,const PipelineConfigInfo& configInfo);
        void createShaderModule(const std::vector<char>& code,VkShaderModule * shaderModule);
        private:
        static std::vector<char> readFile(const std::string & filepath);
        void createGraphicPipeline(const std::string& verFilePath, const std::string & fragFilePath,const PipelineConfigInfo& pipelineConfigureInfo);


         LveDevice& lveDevice;
         VkPipeline graphicsPipeline;
         VkShaderModule vertShaderModule;
         VkShaderModule fragShaderModule;
    } ; 
} // namespace lve
 