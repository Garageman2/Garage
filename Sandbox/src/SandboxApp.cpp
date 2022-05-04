
#include <Garage.h>

class Sandbox : public Garage::Application
{
public:
	Sandbox()
	{
	
	}
	~Sandbox()
	{
	
	}
};

Garage::Application* Garage::CreateApplication()
{
	return new Sandbox();
}