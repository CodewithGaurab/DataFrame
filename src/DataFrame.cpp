#include "Data.h"
#include "DataFrame.h"

DataFrame::DataFrame(std::vector<Data> datas)
{
	data = datas;
}


void DataFrame::add(Data d)
{
	this->data.push_back(d);
}


Data DataFrame::get_columns()
{
	return this->data[0];
}

Data DataFrame::get_row(int index)
{
	return this->data[index];
}


std::vector<std::string> DataFrame::get_column(int index)
{
	std::vector<std::string> column;

	for(int i = 0; i < this->data.size();i++)
	{
		Data row = this->get_row(i);
		column.push_back(row.column(index));

	}
	return column;
}
