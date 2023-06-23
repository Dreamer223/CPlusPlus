#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std :: cin;
using std :: cout;
using std :: endl;

std :: string GeneratePassword(int length);

int main()
{
    int passwordLength;
    cout << "Введите длину пароля: ";
    std :: cin >> passwordLength;
    std :: string password = GeneratePassword(passwordLength);
    cout << "Ваш сгенерированный пароль: " << password << endl;
}

std :: string GeneratePassword(int length)
{
    std :: string password;
    const std ::string character = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < length; i++)
    {
        int randomIndex=rand()%character.length();
        password += character[randomIndex];
    }
    
    return password;
}