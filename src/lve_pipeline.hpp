#pragma once
#include <iostream>
#include <string.h>
#include <vector>
namespace lve
{
    class LvePipeline
    {
        public:
        LvePipeline(const std::string& verPath, const std::string& fragPath);
        private:
        static std::vector<char> readFile(const std::string & filepath);

        void createGraphicPipeline(const std::string& verFilePath, const std::string & fragFilePath);

    } ; 
} // namespace lve
 