#ifndef PINCHER_WINDOW_HPP
#define PINCHER_WINDOW_HPP
#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <string>

namespace pincher {
    class Window {
    public:
        Window(int w, int h, std::string name);
        ~Window();

        Window(const Window&) = delete;
        Window& operator=(const Window&) = delete;

        bool shouldClose() { return glfwWindowShouldClose(window); }

    private:
        void initWindow();

        const int width;
        const int height;

        std::string windowName;
        GLFWwindow* window;
    };
}

#endif /* PINCHER_WINDOW_HPP */