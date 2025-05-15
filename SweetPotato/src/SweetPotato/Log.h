#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>
namespace SweetPotato
{
	class SP_API Log
	{
	public:

		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return m_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return m_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogger;
		static std::shared_ptr<spdlog::logger> m_ClientLogger;
	};
}

#define SP_CORE_TRACE(...)		::SweetPotato::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SP_CORE_INFO(...)		::SweetPotato::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SP_CORE_WARN(...)		::SweetPotato::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SP_CORE_ERROR(...)		::SweetPotato::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SP_CORE_FATAL(...)		::SweetPotato::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define SP_CLIENT_TRACE(...)	::SweetPotato::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SP_CLIENT_INFO(...)		::SweetPotato::Log::GetClientLogger()->info(__VA_ARGS__)
#define SP_CLIENT_WARN(...)		::SweetPotato::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SP_CLIENT_ERROR(...)	::SweetPotato::Log::GetClientLogger()->error(__VA_ARGS__)
#define SP_CLIENT_FATAL(...)	::SweetPotato::Log::GetClientLogger()->fatal(__VA_ARGS__)

