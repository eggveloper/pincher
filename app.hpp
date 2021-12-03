#ifndef PINCHER_EGG_HPP
#define PINCHER_EGG_HPP

#include "window.hpp"

namespace pincher {
    class PincherApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();
    private:
        Window window{WIDTH, HEIGHT, "pincher engine"};
    };
}

#endif /* PINCHER_EGG_HPP */