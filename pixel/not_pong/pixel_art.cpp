
#include "buffer.hpp"

using namespace std;

string RED = "\033[48;2;255;8;1m"; //0
string ORG = "\033[48;2;253;162;0m"; //1
string PCH = "\033[48;2;255;241;138m"; //2
string YEL = "\033[48;2;252;236;4m"; //3
string GRN = "\033[48;2;0;238;15m"; //4
string BLU = "\033[48;2;0;184;232m"; //5
string PUR = "\033[48;2;166;13;253m"; //6
string MAG = "\033[48;2;255;2;254m"; //7 
string PIN = "\033[48;2;254;118;254m"; //8
string WIT = "\033[48;2;255;255;255m"; //9
string GRY = "\033[48;2;120;120;120m"; //10
string BLK = "\033[48;2;0;0;0m"; //11
string END = "\033[0m"; 

string color[12] = 
{ "\033[48;2;255;8;1m",
  "\033[48;2;253;162;0m",
  "\033[48;2;255;241;138m",
  "\033[48;2;252;236;4m",
  "\033[48;2;0;238;15m",
  "\033[48;2;0;184;232m",
  "\033[48;2;166;13;253m",
  "\033[48;2;255;2;254m",
  "\033[48;2;254;118;254m",
  "\033[48;2;255;255;255m",
  "\033[48;2;120;120;120m",
  "\033[48;2;0;0;0m"
};

string Row(int num)
{
	string temp = "";
	for(int i = 0; i < num; i++)
	{
		temp += "  ";
	}
	return temp;
}

string Column(int clr_id, int cols, int rows)
{
	string temp = color[clr_id] + "  ";
	for(int i = 0; i < cols; i++)
	{
		temp += "\n" + Row(rows) + color[clr_id] + "  " + BLK + END;
	}
	return temp;
}

int main()
{
	char input;
	int num = 0;
	Buffer bf;
	while(true)
	{
		cout << Column(4,45,38) + BLK + Row(10 + num) + WIT + Row(5) + BLK + Row(20 - num) + END << endl;
		bf.off();
		cin >> input;
		bf.on();
		switch(input)
		{
			case 'a': 
				if(num > -9)
					num -= 1; break;
			case 'd': 
				if(num < 22)
					num += 1; break;
			case 'q': cout << endl; return 0;
		}
	}
	return 0;
}