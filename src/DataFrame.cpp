#include "Data.h"
#include "DataFrame.h"

DataFrame::DataFrame(const std::string url)
{
	std::vector<Data> d;

	std::ifstream file;
	std::string line;
	file.open(url);
	while(file)
	{
		getline(file,line);
		Data a(line);
		d.push_back(a);
	}
	file.close();
	data = d;
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
