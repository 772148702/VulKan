#pragma once
#include "lve_window.hpp"
#include "lve_device.hpp"


namespace lve {
	class LveRenderer
	{
		LveRenderer(LveWindow& windows, LveDevice& device);
		~LveRenderer();

		LveRenderer(const LveRenderer&) = delete;
		LveRenderer* operator=(const LveRenderer&) = delete;


	};
}