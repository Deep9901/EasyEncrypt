#include <iostream>
#include "encryption.h"

int main()
{
    std::string filename;
    char mode;

    std::cout << "Enter the filename: ";
    getline(std::cin >> std::ws, filename);
    std::cout << "Encrypt (e) or Decrypt (d) ";
    std::cin >> mode;

    if (mode == 'e' || mode == 'E')
    {
        if (encryptFile(filename, true))
        {
            std::cout << "Encryption completed successfully." << std::endl;
        }
        else
        {
            std::cerr << "Error: unable to perform encryption." << std::endl;
        }
    }
    else if (mode == 'd' || mode == 'D')
    {
        if (encryptFile(filename, false))
        {
            std::cout << "Decryption completed successfully" << std::endl;
        }
        else
        {
            std::cerr << "Error: unable to perform decryption." << std::endl;
        }
    }
    else
    {
        std::cerr << "Invalid mode selected. Use 'e' for encryption and 'd' for decryption." << std::endl;
    }
    return 0;
}









