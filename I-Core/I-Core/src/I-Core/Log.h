#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>

namespace ICore {
	class ICore_API Log
	{
	public:
		
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger>s_CoreLogger;
		static std::shared_ptr<spdlog::logger>s_ClientLogger;

	};
}

// Core log macros
#define IC_CORE_TRACE(...)     :: ICore::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define IC_CORE_INFO(...)      :: ICore::Log::GetCoreLogger()->info(__VA_ARGS__)
#define IC_CORE_ERROR(...)	   :: ICore::Log::GetCoreLogger()->error(__VA_ARGS__)
#define IC_CORE_WARN(...)      :: ICore::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define IC_CORE_FATAL(...)     :: ICore::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define IC_TRACE(...)     :: ICore::Log::GetClientLogger()->trace(__VA_ARGS__)
#define IC_INFO(...)      :: ICore::Log::GetClientLogger()->info(__VA_ARGS__)
#define IC_ERROR(...)	   :: ICore::Log::GetClientLogger()->error(__VA_ARGS__)
#define IC_WARN(...)      :: ICore::Log::GetClientLogger()->warn(__VA_ARGS__)
#define IC_FATAL(...)     :: ICore::Log::GetClientLogger()->fatal(__VA_ARGS__)



