#include "app.hpp"

namespace pincher {
    void PincherApp::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}