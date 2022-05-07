#include "Application.h"
#include <Garage/Events/ApplicationEvent.h>
#include <Garage/Log.h>

namespace Garage
{
	Application::Application()
	{
	
	}

	Application::~Application()
	{
		
	}

	void Application::Run() 
	{
		WindowResizeEvent e(1280, 720);
		GR_TRACE(e);
		while (true);
	}
}