#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>

#include "DataFrame.h"










int main()
{
	DataFrame data("rental-price-indexes-march-2019-csv.csv");
	std::vector<std::string> c = data.get_column(1);
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
