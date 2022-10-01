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
 
 
 
 * book design Patterns 
 
 */

#include <iostream>

int main() {
  
    return 0;
}
