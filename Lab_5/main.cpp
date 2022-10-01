//
//  main.cpp
//  Lab_5
//
//  Created by Christian Matos on 10/1/22.
//

/*
 ~~~~~~~~~~~Class Notes~~~~~~~~~~~~~
push_back will apend a letter or number
 
ifstream ~ Input file stream
ofstream ~ output file stream
fstream  ~ file stream
 
 file access flags
 
 ios::app ~ append mode
 ios::ate ~ advance to end mode
 ios::binary ~ Binary mode
 ios::in ~ input mode
 ios::out ~ output mode
 ios::trunc ~ Trumcate mode.
 
 
 example
 
 int main() {
  fstream dataFile;
 
  cout << "Opening file...\n";
  dataFile.open("demofile.txt", ios::out);
  cout << "Now writing data to the file.\n";
  dataFile << "Jones\n";
  dataFile << "Smith\n";
  dataFile << "Willis\n";
  dataFile << "Davis\n";
  dataFile.close();
  cout << "Done.\n";
 
  return 0;
  }
 
 *always add end of file marker
 
 check if file exist aka test
 
 fstream dataFile;
 dataFile.open("values.txt", ios::in);
 
 if (dataFile.fail()) {
 dataFile.open("values.txt", ios::out);
 } else {
 dataFile.close();
 cout << "The file values.txt already exists.\n";
 
 }
 
 can NOT pass by value it has to be by reference
 
 
 
 {* book design Patterns}
 
 when we check for an error we are really looking at bit flages
 
 
 clear function will clear the flag
 
 Stream BIts
 
 ios::eofbit ~ end of stream ends
 
 ios::failbit ~  Set when an attempted operation has failed.
 
 ios::hardfail ~ Set when an unrecoverable error has occurred.
 
 ios::badbit ~ Set when an invalid operation has been
 attempted.

 ios::goodbit ~ Set when all the flags above are not set.
 Indicates the stream is in good condition.
 
 eof() ~ Returns true (nonzero) if the eofbit flag is set,
 otherwise returns false.
 
 fail() ~ Returns true (nonzero) if the failbit or hardfail
 flags are set, otherwise returns false.
 
 bad() ~ Returns true (nonzero) if the badbit flag is set,
 otherwise returns false.
 
 good() ~ Returns true (nonzero) if the goodbit flag is set,
 otherwise returns false.
 
 clear() ~ When called with no arguments, clears all the flags
 listed above. Can also be called with a specific flag
 as an argument.
 
 
 Cheacking the state of the bit
 
 void showState(fstream &file) {
 cout << "File Status:\n";
 cout << " eof bit: " << file.eof() << endl;
 cout << " fail bit: " << file.fail() << endl;
 cout << " bad bit: " << file.bad() << endl;
 cout << " good bit: " << file.good() << endl;
 file.clear();
 }
 
 
 */

#include <iostream>

int main() {
  
    return 0;
}
