include .env

CFLAGS = -std=c++17 -I. -I${VULKAN_SDK_PATH}/include
LDFLAGS = -L${VULKAN_SDK_PATH}/lib `pkg-config --static --libs glfw3` -lvulkan

pincher: *.cpp *.hpp
	g++ $(CFLAGS) -o pincher *.cpp $(LDFLAGS)

.PHONY: test clean

test: pincher
	./pincher

clean:
	rm -rf pincher