/*

Code solution for assignment:

String Rotations 

Create a function that accepts a string argument
and returns an array of strings, which are shifted
versions of the argument string. 

Sample Input 
"Hello" 

Sample Output 
["elloH", "lloHe", "loHel", "oHell", "Hello"]  

As you can see from the example above, each element
shifts the first character of the previous version
to the end. 

The original string should be included in the output
array. The order matters; each element of the output
array should be the shifted version of the previous
element. 

The output array should have the same length as the
input string. 
The function should return an empty array when
a zero-length String is provided as the argument. 

*/
#include <iostream>
#include <string>

class wordOperations{

	private:
	std::string Word;
	int sizeW = 0;

	public:
	void setData(){

		getline(std::cin, Word);
		sizeW = Word.size();

	}

	void getData(){

		std::cout << Word;

	}

	void forRotateData(){

		for (int y = 1; y <= sizeW; y++)
		{
			std::string temp;
			for (int x = y; x < sizeW; x++) temp += Word[x];
			for (int x = 0; x < y; x++) temp += Word[x];
			std::cout << temp;
			if ( y < sizeW ) std::cout << ',' << ' ';
		}
		std::cout <<  '.' << '\n';
	}

	void appendRotateData(){

		for (int y = 1; y <= sizeW; y++)
		{
			std::string temp;
			temp.append(Word.begin()+y, Word.end());
			temp.append(Word.begin(), Word.begin()+y);
			std::cout << temp;
			if ( y < sizeW ) std::cout << ',' << ' ';
		}
		std::cout <<  '.' << '\n';
	}

};


int main(){

	std::cout << "\nWrite word: ";

	wordOperations call;

	call.setData();

	std::cout << "\nYou wrote: ";

    call.getData();
    
	std::cout << "\n\n1. For-cycle rotated data: ";

	call.forRotateData();

	std::cout << "\n2. Append function rotated data: ";

	call.appendRotateData();

}