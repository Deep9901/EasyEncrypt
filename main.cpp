#include <iostream>
#include "encryption.h"

int main()
{
    std::string filename;
    std::char mode;

    std::cout << "Enter the filename: ";
    getline(cin >> std::ws, filename);
    std::cout << "Encrypt (e) or Decrypt (d) ";
    std::cin >> mode;

    if (mode == 'e' || mode == 'E')
    {
        if (encryptFile(filename, true))
        {
            std::cout << "Encryption completed successfully." << endl;
        }
        else
        {
            std::cerr << "Error: unable to perform encryption." << endl;
        }
    }
    else if (mode == 'd' || mode == 'D')
    {
        if (encryptFile(filename, false))
        {
            std::cout << "Decryption completed successfully" << endl;
        }
        else
        {
            std::cerr << "Error: unable to perform decryption." << endl;
        }
    }
    else
    {
        std::cerr << "Invalid mode selected. Use 'e' for encryption and 'd' for decryption." << endl;
    }
    return 0;
}









