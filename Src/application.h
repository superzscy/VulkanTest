#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class Application 
{
public:
	void run();

private:
	void initWindow();

	void initVulkan();

	void createInstance();

	void mainLoop();

	void cleanup();

	GLFWwindow* m_window;
	VkInstance m_vkInstance;
};
