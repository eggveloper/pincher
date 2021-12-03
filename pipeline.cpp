#include "pipeline.hpp"

#include <fstream>
#include <iostream>
#include <stdexcept>

namespace pincher {
    std::vector<char> Pipeline::readFile(const std::string& filepath) {
        std::ifstream file{filepath, std::ios::ate | std::ios::binary};

        if (!file.is_open()) {
            throw std::runtime_error("[ERROR][PINCHER][pipeline.cpp] Failed to open file: " + filepath);
        }

        size_t fileSize = static_cast<size_t>(file.tellg());
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(), fileSize);
        file.close();

        return buffer;
    }

    void Pipeline::createGraphicsPipeline(
        const std::string& vertFilepath, const std::string& fragFilepath
    ) {
        auto vertCode = readFile(vertFilepath);
        auto fragCode = readFile(fragFilepath);

        std::cout << "[DEBUG][PINCHER][pipeline.cpp] Vertex Shader Code Size: " << vertCode.size() << std::endl;
        std::cout << "[DEBUG][PINCHER][pipeline.cpp] Fragment Shader Code Size: " << fragCode.size() << std::endl;
    }
}