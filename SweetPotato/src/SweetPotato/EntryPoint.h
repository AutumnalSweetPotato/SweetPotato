#pragma once
#ifdef SP_PLATFORM_WINDOWS

extern SweetPotato::Application* SweetPotato::CreateApplication();

int main(int argc,char** argv)
{
	SweetPotato::Log::Init();
	SP_CORE_ERROR("error");
	SP_CORE_INFO("info");
	SP_CORE_TRACE("trace");
	SP_CORE_WARN("warn");
	
	auto app = SweetPotato::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif // SP_PLATFORM_WINDOWS
