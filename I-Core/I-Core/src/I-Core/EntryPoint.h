#pragma once

#ifdef IC_PLATFORM_WINDOWS

extern ICore::Application* ICore::CreateApplication();

void main(int argc, char** argv) {
	
	printf("I-Core Engine\n");
	auto app = ICore::CreateApplication();
	app->Run();
	delete app;
}

#endif 
