#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Генерация случайного числа
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // Загаданное число от 1 до 100
    int guess;
    int attempts = 0;

    std::cout << "Добро пожаловать в игру 'Угадай число'!\n";
    std::cout << "Компьютер задумал число от 1 до 100.\n";

    // Цикл угадывания числа
    do {
        std::cout << "Попробуйте угадать число: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Меньше...\n";
        } else if (guess < secretNumber) {
            std::cout << "Больше...\n";
        } else {
            std::cout << "Поздравляю! Вы угадали число " << secretNumber << " за " << attempts << " попыток!\n";
        }
    } while (guess != secretNumber);

    return 0;
}
