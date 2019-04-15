#include "Data.h"

Data::Data(std::string lines)
{
	line = lines;
}


std::string Data::column(int index)
{
	std::string word = "";
	int index2 = 0;
	for(int i = 0; i < this->line.length();i++)
	{
		if(this->line[i] != ',')
		{
			word += line[i];
		}

		else{

			if(index2 == index)
			{
				return word;
			}
			word = "";
			index2 += 1;

		}
	}
}
