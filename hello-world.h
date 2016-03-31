#include <string>

class HelloWorld {
private:
	std::string name;
public:
	void setName(std::string &);
	std::string getName();
};