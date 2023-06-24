#include <iostream>
#include <cstdlib>
#include <ctime>

using std :: endl;
using std :: cout;
int main()
{
    std :: string operation[] = {"Камень","Ножницы", "Бумага"};
    int playerChoice;
    int computerChoice;
    std :: cout << "Выберите вариант: \n";
    std :: cout << "1 Камень" << endl;
    std :: cout << "2 Ножницы\n";
    std :: cout << "3 Бумага\n";
    std :: cin >> playerChoice;
    playerChoice-=1;
    computerChoice = rand() % 3;
    std::cout << "Выбор компьютера: " << computerChoice+1 << endl;
    if (playerChoice == computerChoice)
    {
        std :: cout << "Ничья \n";
    }
    else if ((playerChoice == 0 && computerChoice == 1) ||
               (playerChoice == 1 && computerChoice == 2) ||
               (playerChoice == 2 && computerChoice == 0))
    {
        std :: cout << "Игрок победил \n";
    }
    else 
    {
        std :: cout << "Компьютер победил \n";
    }
    
    
    
    

}