#include <ICore.h>

class Sandbox:public ICore::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

ICore::Application* ICore::CreateApplication()
{
	return new Sandbox();
}