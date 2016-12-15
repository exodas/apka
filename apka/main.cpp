
#include <spdlog/spdlog.h>

int main()
{
	fmt::print("Hello World\n");
	fmt::print("Mam {} lat\n", 20);
	auto logger = spdlog::stdout_logger_mt("Apka",true);

	logger->set_level(spdlog::level::debug);
	logger->info("Dzisiaj techday");
	logger->debug("Mowimy o c++");
	logger->error("mielismy opoznienie");
	std::getchar();
	return 0;
}