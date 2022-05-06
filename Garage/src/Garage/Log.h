#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Garage {
	class GARAGE_API Log
	{
	public:

		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private: 
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Logging Macros
#define GR_CORE_FATAL(...) ::Garage::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define GR_CORE_ERROR(...) ::Garage::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GR_CORE_WARN(...)  ::Garage::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GR_CORE_INFO(...)  ::Garage::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GR_CORE_TRACE(...) ::Garage::Log::GetCoreLogger()->trace(__VA_ARGS__)

//Client Logging Macros
#define GR_FATAL(...)      ::Garage::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define GR_ERROR(...)      ::Garage::Log::GetClientLogger()->error(__VA_ARGS__)
#define GR_WARN(...)       ::Garage::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GR_INFO(...)       ::Garage::Log::GetClientLogger()->info(__VA_ARGS__)
#define GR_TRACE(...)      ::Garage::Log::GetClientLogger()->trace(__VA_ARGS__)
