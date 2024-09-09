#include "Greeter.h"

namespace Greetings
{
	std::string Greeter::greet(std::string name)
	{
		return "Здравствуйте, " + name + "!";
	}
}