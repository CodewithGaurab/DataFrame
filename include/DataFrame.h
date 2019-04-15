#ifndef DATAFRAME_H
#define DATAFRAME_H
#include "Data.h"
#include <vector>
#include <string>
#include <fstream>
class DataFrame
{
	private:

		std::vector <Data>	data;

	public:

		DataFrame(const std::string);
		void add(Data d);
		Data get_columns();
		Data get_row(int index);
		std::vector<std::string> get_column(int index);

};
#endif // DATAFRAME_H
