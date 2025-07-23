#include <iostream>
#include <fstream>
#include <string>

using namespace std;

std::string addNumbers(const std::string& num1, const std::string& num2) {
    std::string result;
    int len1 = num1.length();
    int len2 = num2.length();
    int maxLength = std::max(len1, len2);

    // Добавляем ведущие нули к более короткому числу
    std::string n1 = num1 + std::string(maxLength - len1, '0');
    std::string n2 = num2 + std::string(maxLength - len2, '0');

    // Складываем цифры поразрядно
    for (int i = 0; i < maxLength; ++i) {
        int digit1 = n1[i] - '0';
        int digit2 = n2[i] - '0';
        int sum = digit1 + digit2;
        result += std::to_string(sum); // Добавляем результат сложения
    }

    // Результат нужно перевернуть, так как мы добавляли цифры справа налево

    return result;
}


int main()
{

    // Задание 1

    //ifstream inputFile("input.txt");
    //ofstream outFile("output.txt");
    //int num1, num2;

    //if (inputFile.is_open()) {
    //    inputFile >> num1 >> num2;
    //}
    //else {
    //    cerr << "123"<<endl;
    //}

    //if (outFile.is_open()) {
    //    outFile << num1 * num2;
    //}
    //else {
    //    cerr << "123" << endl;
    //}

    //inputFile.close();
    //outFile.close();

    //ifstream inputFile("input.txt");
    //int num1, num2, num3;

    //if (inputFile.is_open()) {
    //    inputFile >> num1 >> num2 >> num3; // Считываем два числа
    //     }
    //else {
    //    cerr << "Не удалось открыть файл." << endl;
    //        }

    //inputFile.close();

    //ofstream outputFile;
    //outputFile.open("output.txt");

    //int max_1_2 = max(num1, num2);
    //int max_3 = max(max_1_2, num3);

    //if (outputFile.is_open()) {
    //    outputFile << max_3;
    //   
    //}
    //else {
    //    cerr << "Не удалось открыть файл." << endl;
    //}
    //outputFile.close();

	// Задание 1

    // Задание 2

    ifstream inputFile("input.txt");
    ofstream outFile("output.txt");
    int num1, num2, num3;

    if (inputFile.is_open()) {
        inputFile >> num1 >> num2 >> num3;
    }
    else {
        cerr << "123" << endl;
    }

    string str;

    

    string result = addNumbers(to_string(num1), to_string(num2));
    cout << "Результат сложения: " << result << std::endl;



    cout << str;


    if (outFile.is_open()) {
        outFile << num1 * num2;
    }
    else {
        cerr << "123" << endl;
    }

    inputFile.close();
    outFile.close();



    // Задание 2

	return 0;
}
