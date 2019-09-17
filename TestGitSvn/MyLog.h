#pragma once
#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
class Log
{
public:
	static void Init();

	inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
	inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_ClientLogger;
};

#define CORE_TRACE(...)    ::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...)     ::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...)     ::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_ERROR(...)    ::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_FATAL(...)    ::Log::GetCoreLogger()->critical(__VA_ARGS__)