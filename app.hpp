#ifndef PINCHER_APP_HPP
#define PINCHER_APP_HPP

#include "window.hpp"
#include "pipeline.hpp"
#include "device.hpp"

namespace pincher {
    class PincherApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        Window window{WIDTH, HEIGHT, "pincher engine"};
        Device device{window};
        Pipeline pipeline{
            device,
            "shaders/simple_shader.vert.spv",
            "shaders/simple_shader.frag.spv",
            Pipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)
        };
    };
}

#endif /* PINCHER_APP_HPP */