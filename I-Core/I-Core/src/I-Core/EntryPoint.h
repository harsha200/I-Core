#pragma once

#ifdef IC_PLATFORM_WINDOWS

extern ICore::Application* ICore::CreateApplication();

void main(int argc, char** argv) {
	
	ICore::Log::Init();
	IC_CORE_WARN("Initialised Log!");
	int a = 5;
	IC_CORE_INFO("Hello! Var={0}", a);

	auto app = ICore::CreateApplication();
	app->Run();
	delete app;
}

#endif 
