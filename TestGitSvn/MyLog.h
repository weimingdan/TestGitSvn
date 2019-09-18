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
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define DETAILLOG(...) "[{}:#{}] {}: {}", __FILENAME__ , __LINE__, __FUNCTION__, fmt::format(__VA_ARGS__)

#define CORE_INFO(...)     ::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_INFOD(...)     ::Log::GetCoreLogger()->info(DETAILLOG(__VA_ARGS__))
#define CORE_WARN(...)     ::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_WARND(...)     ::Log::GetCoreLogger()->warn(DETAILLOG(__VA_ARGS__))
#define CORE_ERROR(...)    ::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_ERRORD(...)    ::Log::GetCoreLogger()->error(DETAILLOG(__VA_ARGS__))
#define CORE_FATAL(...)    ::Log::GetCoreLogger()->critical(DETAILLOG(__VA_ARGS__))

