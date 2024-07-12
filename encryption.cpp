#include "encryption.h"
#include <fstream>
#include <cctype>
#include <iterator>
#include <string>


bool performCaesarCipher(std::string &content, bool encrypt)
{
    std::int shift = encrypt ? 3 : -3;

    for (std::char &ch: content)
    {
        if (isalpha(ch))
        {
            std::char base = isupper(ch) ? 'A' : 'B';
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base);
        }

        return true;
    }
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

 