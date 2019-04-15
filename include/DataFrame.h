#ifndef DATAFRAME_H
#define DATAFRAME_H
#include "Data.h"
#include <vector>
class DataFrame
{
	private:

		std::vector <Data>	data;

	public:

		DataFrame(std::vector<Data> datas);
		void add(Data d);
		Data get_columns();
		Data get_row(int index);
		std::vector<std::string> get_column(int index);

};
#endif // DATAFRAME_H
