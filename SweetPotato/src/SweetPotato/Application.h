#pragma once
#include "Core.h"
namespace SweetPotato
{
	
	class SP_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}


