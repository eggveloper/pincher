#ifndef PINCHER_EGG_HPP
#define PINCHER_EGG_HPP

#include "window.hpp"
#include "pipeline.hpp"

namespace pincher {
    class PincherApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();
    private:
        Window window{WIDTH, HEIGHT, "pincher engine"};
        Pipeline pipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
    };
}

#endif /* PINCHER_EGG_HPP */