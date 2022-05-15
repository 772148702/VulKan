#include "lve_pipeline.hpp"

#include <fstream>
#include <filesystem>


namespace lve 
{

    LvePipeline::LvePipeline(const std::string& verPath, const std::string& fragPath)
    {
        createGraphicPipeline(verPath, fragPath);
    }


   void LvePipeline::createGraphicPipeline(const std::string& verFilePath, const std::string & fragFilePath)
   {
        auto ver = readFile(verFilePath);
        auto frag  = readFile(fragFilePath);
        std::cout<<"vertex shader size "<< ver.size()<<std::endl;
        std::cout<<"frag shader size"<<frag.size()<<std::endl;

   }


    std::vector<char> LvePipeline::readFile(const std::string & filepath)
    {
 
        auto targetPath = std::filesystem::current_path().string()+"\\" + filepath;
        std::ifstream file(targetPath,std::ios::ate|std::ios::binary);
        if(!file.is_open())
        {
            throw std::runtime_error("failed to openfile:"+ targetPath);
        }
        size_t fileSize = static_cast<size_t>(file.tellg());
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(),fileSize);
        file.close();
        return buffer;

    }
}