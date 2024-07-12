#include "encryption.h"
#include <fstream>
#include <cctype>
#include <iterator>
#include <string>
#include <iostream>

bool performCaesarCipher(std::string &content, bool encrypt)
{
    int shift = encrypt ? 3 : -3;

    for (char &ch : content)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'B';
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
    std::string content(std::istreambuf_iterator<char>(inFile), {});
    inFile.close();

    if (performCaesarCipher(content, encrypt))
    {
        // Creating an output file and writing the modified content
        std::ofstream outFile(encrypt ? "encrypted_" + filename : "decrypte_" + filename);
        if (!outFile)
        {
            return false;
        }

        outFile << content;

        outFile.close();

        return true;
    }
}
