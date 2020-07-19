#pragma once

#include "Core.h"

namespace ICore{
	class ICore_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
