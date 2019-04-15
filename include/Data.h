#ifndef DATA_H
#define DATA_H
#include <string>
class Data
{
	public:
		std::string line;

		Data(std::string lines);

		std::string column(int index);
};


#endif // DATA_H
