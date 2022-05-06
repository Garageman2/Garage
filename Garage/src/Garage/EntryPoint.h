#pragma once

#ifdef GR_PLATFORM_WINDOWS

extern Garage::Application* Garage::CreateApplication();

int main(int argc, char** argv)
{
	Garage::Log::Init();
	GR_CORE_WARN("Log initialized");
	int a = 6;
	GR_INFO("Log init! Var = {0}",a);

	auto app = Garage::CreateApplication();
	app->Run();
	delete app;
}
#endif