#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

string RED = "\033[48;2;255;8;1m";
string ORG = "\033[48;2;253;162;0m";
string PCH = "\033[48;2;255;241;138m";
string YEL = "\033[48;2;252;236;4m";
string GRN = "\033[48;2;0;238;15m";
string BLU = "\033[48;2;0;184;232m";
string PUR = "\033[48;2;166;13;253m";
string MAG = "\033[48;2;255;2;254m";
string PIN = "\033[48;2;254;118;254m";
string WIT = "\033[48;2;255;255;255m";
string GRY = "\033[48;2;120;120;120m";
string BLK = "\033[48;2;0;0;0m";
string END = "\033[0m\n";

string P(int num)
{
	string temp = "  ";
	for(int i = 1; i < num; i++)
	{
		temp += "  ";
	}
	return temp;
}

int main()
{
	// sleep(1);
	cout << WIT+P(43)+END;
	// sleep(1);
	cout << WIT+P(18)+BLK+P(17)+WIT+P(8)+END;
	// sleep(1);
	cout << WIT+P(17)+BLK+P(1)+PCH+P(17)+BLK+P(1)+WIT+P(7)+END;
	// sleep(1);
	cout << WIT+P(16)+BLK+P(1)+PCH+P(2)+PIN+P(14)+PCH+P(3)+BLK+P(1)+WIT+P(6)+END;
	// sleep(1);
	cout << WIT+P(4)+RED+P(4)+WIT+P(4)+RED+P(4)+BLK+P(1)+PCH+P(2)+PIN+P(5)+MAG+P(1)+PIN+P(9)+PCH+P(2)+BLK+P(1)+WIT+P(6)+END;
	// sleep(1);
	cout << RED+P(16)+BLK+P(1)+PCH+P(1)+PIN+P(2)+MAG+P(1)+PIN+P(14)+PCH+P(1)+BLK+P(1)+WIT+P(6)+END;
	// sleep(1);
	cout << RED+P(4)+ORG+P(4)+RED+P(4)+ORG+P(4)+BLK+P(1)+PCH+P(1)+PIN+P(10)+BLK+P(2)+PIN+P(1)+MAG+P(1)+PIN+P(3)+PCH+P(1)+BLK+P(1)+WIT+P(1)+BLK+P(2)+WIT+P(3)+END;
	// sleep(1);
	cout << ORG+P(16)+BLK+P(1)+PCH+P(1)+PIN+P(9)+BLK+P(1)+GRY+P(2)+BLK+P(1)+PIN+P(4)+PCH+P(1)+BLK+P(2)+GRY+P(2)+BLK+P(1)+WIT+P(2)+END;
	// sleep(1);
	cout << ORG+P(4)+YEL+P(4)+ORG+P(2)+BLK+P(4)+YEL+P(2)+BLK+P(1)+PCH+P(1)+PIN+P(6)+MAG+P(1)+PIN+P(2)+BLK+P(1)+GRY+P(3)+BLK+P(1)+PIN+P(3)+PCH+P(1)+BLK+P(1)+GRY+P(3)+BLK+P(1)+WIT+P(2)+END;
	// sleep(1);
	cout << YEL+P(10)+BLK+P(1)+GRY+P(2)+BLK+P(2)+YEL+P(1)+BLK+P(1)+PCH+P(1)+PIN+P(9)+BLK+P(1)+GRY+P(4)+BLK+P(4)+GRY+P(4)+BLK+P(1)+WIT+P(2)+END;
	// sleep(1);
	cout << YEL+P(4)+GRN+P(4)+YEL+P(2)+BLK+P(2)+GRY+P(2)+BLK+P(3)+PCH+P(1)+PIN+P(3)+MAG+P(1)+PIN+P(5)+BLK+P(1)+GRY+P(12)+BLK+P(1)+WIT+P(2)+END;
	// sleep(1);
	cout << GRN+P(11)+BLK+P(2)+GRY+P(2)+BLK+P(2)+PCH+P(1)+PIN+P(8)+BLK+P(1)+GRY+P(14)+BLK+P(1)+WIT+P(1)+END;
	// sleep(1);
	cout << GRN+P(4)+BLU+P(4)+GRN+P(4)+BLK+P(2)+GRY+P(2)+BLK+P(1)+PCH+P(1)+PIN+P(1)+MAG+P(1)+PIN+P(6)+BLK+P(1)+GRY+P(3)+WIT+P(1)+BLK+P(1)+GRY+P(5)+WIT+P(1)+BLK+P(1)+GRY+P(2)+BLK+P(1)+WIT+P(1)+END;
	// sleep(1);
	cout << BLU+P(13)+BLK+P(4)+PCH+P(1)+PIN+P(6)+MAG+P(1)+PIN+P(1)+BLK+P(1)+GRY+P(3)+BLK+P(2)+GRY+P(3)+BLK+P(1)+GRY+P(1)+BLK+P(2)+GRY+P(2)+BLK+P(1)+WIT+P(1)+END;
	// sleep(1);
	cout << BLU+P(4)+PUR+P(4)+BLU+P(4)+PUR+P(3)+BLK+P(2)+PCH+P(1)+PIN+P(8)+BLK+P(1)+GRY+P(1)+PIN+P(2)+GRY+P(9)+PIN+P(2)+BLK+P(1)+WIT+P(1)+END;
	// sleep(1);
	cout << PUR+P(16)+BLK+P(1)+PCH+P(2)+PIN+P(1)+MAG+P(1)+PIN+P(5)+BLK+P(1)+GRY+P(1)+PIN+P(2)+GRY+P(1)+BLK+P(1)+GRY+P(2)+BLK+P(1)+GRY+P(2)+BLK+P(1)+GRY+P(1)+PIN+P(2)+BLK+P(1)+WIT+P(1)+END;
	// sleep(1);
	cout << PUR+P(4)+WIT+P(4)+PUR+P(4)+WIT+P(4)+BLK+P(1)+PCH+P(3)+PIN+P(7)+BLK+P(1)+GRY+P(3)+BLK+P(7)+GRY+P(2)+BLK+P(1)+WIT+P(2)+END;
	// sleep(1);
	cout << WIT+P(15)+BLK+P(3)+PCH+P(10)+BLK+P(1)+GRY+P(10)+BLK+P(1)+WIT+P(3)+END;
	// sleep(1);
	cout << WIT+P(14)+BLK+P(1)+GRY+P(3)+BLK+P(21)+WIT+P(4)+END;
	// sleep(1);
	cout << WIT+P(14)+BLK+P(1)+GRY+P(2)+BLK+P(2)+WIT+P(1)+BLK+P(1)+GRY+P(2)+BLK+P(1)+WIT+P(5)+BLK+P(1)+GRY+P(2)+BLK+P(1)+WIT+P(1)+BLK+P(1)+GRY+P(2)+BLK+P(1)+WIT+P(5)+END;
	// sleep(1);
	cout << WIT+P(14)+BLK+P(4)+WIT+P(2)+BLK+P(3)+WIT+P(7)+BLK+P(3)+WIT+P(2)+BLK+P(2)+WIT+P(6)+END;
	// sleep(1);
	cout << WIT+P(43)+END;
}