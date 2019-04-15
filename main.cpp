#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>

#include "DataFrame.h"










int main()
{

	std::vector<Data> d;

	std::ifstream file;
	std::string line;
	file.open("rental-price-indexes-march-2019-csv.csv");
	while(file)
	{
		getline(file,line);
		Data a(line);
		d.push_back(a);
	}
	file.close();
	DataFrame data(d);
	std::vector<std::string> c = data.get_column(2);
	//Data z = data.get_row(0);
	//std::cout << z.line;
	for(int i = 0;i < c.size();i++)
	{
		std::cout << c[i] << "\n";
	}

	/*
	Data columna = data.get_columns();
	std::cout << columna.line << "\n";
	std::cout << columna.column(2);
	*/




}
