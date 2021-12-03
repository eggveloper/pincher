#ifndef PINCHER_PIPELINE_HPP
#define PINCHER_PIPELINE_HPP

#include <string>
#include <vector>

namespace pincher {
    class Pipeline {
    public:
        Pipeline(const std::string& vertFilepath, const std::string& fragFilepath);

    private:
        static std::vector<char> readFile(const std::string& filepath);

        void createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath);
    };
}

#endif