#include "encryption.h"
#include <fstream>
#include <cctype>
#include <iterator>
#include <string>


bool performCaesarCipher(std::string &content, bool encrypt)
{
    
}

bool encryptFile(const std::string &filename, bool encrypt)
{
    // Open the input file
    std::ifstream inFile(filename);
    if (!inFile)
    {
        return false;
    }

    // Read the content of the file
    std::string content(istreambuf_iterator<char>(inFile), {})
    inFile.close();

    if (performCaesarCipher(content, encrypt)) 
    {

    }
}

 