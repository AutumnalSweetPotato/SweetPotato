#pragma once
#ifdef SP_PLATFORM_WINDOWS

extern SweetPotato::Application* SweetPotato::CreateApplication();

int main(int argc,char** argv)
{
	printf("SweetPotato Engine!");
	auto app = SweetPotato::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif // SP_PLATFORM_WINDOWS
