#pragma once

#ifdef GR_PLATFORM_WINDOWS

extern Garage::Application* Garage::CreateApplication();

int main(int argc, char** argv)
{
	printf("Garage Engine!");
	auto app = Garage::CreateApplication();
	app->Run();
	delete app;
}
#endif