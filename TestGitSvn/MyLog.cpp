#include "stdafx.h"
#include "MyLog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/base_sink.h"
#include "spdlog/sinks/basic_file_sink.h"


std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

void Log::Init()
{
	// spdlog::set_pattern("%^[%T] %n: %v%$");
	// spdlog::set_pattern("%^[%Y-%m-%d %T] [%l] [%n] %v%$");
	// spdlog::flush_on(spdlog::level::trace);
	// s_CoreLogger = spdlog::stdout_color_mt("Git");
	// s_CoreLogger->set_level(spdlog::level::trace);

	// s_ClientLogger = spdlog::stdout_color_mt("APP");
	// 
	std::vector<spdlog::sink_ptr> sinks;
	sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
	sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("log/log.log", true));
	s_CoreLogger = std::make_shared<spdlog::logger>("Git", begin(sinks), end(sinks));
	s_CoreLogger->set_level(spdlog::level::trace);
	s_CoreLogger->flush_on(spdlog::level::trace);
	s_CoreLogger->set_pattern("%^[%Y-%m-%d %T] [%l] [%n] %v%$");

	//register it if you need to access it globally
	// spdlog::register_logger(s_CoreLogger);

}
