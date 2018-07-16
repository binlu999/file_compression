/*
 * main.cpp
 *
 *  Created on: May 4, 2018
 *      Author: blu
 */
#include "huff.h"
#include <iostream>
#include <vector>
#include <fstream>

Node * constructHeap();
unsigned int frequencies[256] = { 0 };

void compress(string inputfile, string outputfile) {

	cout << "Compressing input file " << inputfile << endl;

	unsigned char nextChar;
	fstream fin(inputfile, fstream::in);

	if (!fin) {
		cout << "Unable to open file " << inputfile;
		exit(1); // terminate with error
	}

	// first, calculate the frequencies of each character
	while (fin >> noskipws >> nextChar) {
		cout << nextChar;
		frequencies[nextChar]++;
	}

	cout << "Compressed input file " << inputfile << endl;

	 Node * root = constructHeap();
	 string code;
	 root->fillCodebook(codebook,code);

	 putOut();
	 */
}

void decompress() {
	/*
	 cin >> noskipws;
	 char magic[8];
	 cin.read(magic,8);
	 char nextByte;
	 for(int i = 0; i < 256; i++){
	 cin.read((char *)&frequencies[i],4);
	 }

	 Node * root = constructHeap();
	 string code;
	 root->fillCodebook(codebook,code);

	 while(cin>>nextByte){
	 for(int i = 0; i < 8; i++){
	 if((nextByte >> i) & 0x01)
	 code += '1';
	 else
	 code += '0';
	 for(int i = 0; i < 256; i++){
	 if(codebook[i] == code){
	 if(frequencies[i]){
	 cout << (unsigned char) i;
	 code.clear();
	 frequencies[i]--;
	 break;
	 }
	 else
	 return;
	 }
	 } // for
	 }
	 }

	 */
}

int main(int argc, char* argv[]) {

	std::vector<std::string> args(argv, argv + argc);
	if (args.size() == 4 && args[1] == "-c") {
		compress(args[2], args[3]);
	} else if (args.size() == 3 && args[1] == "-d") {

	} else {
		cout << "Usage: " << argv[0]
				<< " -c|-d input_file_name output_file_name " << endl;
	}
	return 0;
}
