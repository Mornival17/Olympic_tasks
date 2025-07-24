#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>
#include <map>
#include <iomanip>


using namespace std;

//string customAdd(int a, int b) {
//    string strA = to_string(a);
//    string strB = to_string(b);
//
//    int lenA = strA.length();
//    int lenB = strB.length();
//    int maxLength = max(lenA, lenB);
//
//    // Дополняем нулями слева
//    string n1 = string(maxLength - lenA, '0') + strA;
//    string n2 = string(maxLength - lenB, '0') + strB;
//
//    string result;
//    // Складываем поразрядно
//    for (int i = 0; i < maxLength; ++i) {
//        int digit1 = n1[i] - '0';
//        int digit2 = n2[i] - '0';
//        int sum = digit1 + digit2;
//        result += to_string(sum);
//    }
//
//    return result;
//}

//set<long long> sdvig(const string str) {
//
//    set<long long> numbers;
//
//    int n = str.size();
//
//    string dab = str + str;
//
//    for (int i = 0; i < n; i++) {
//        string sdvg = dab.substr(i, n);
//        cout << sdvg << endl;
//
//        if (sdvg[0] != '0') {
//            numbers.insert(stoll(sdvg));
//        }
//       }
//    return numbers;
//
//}

//string revers(const string& str1) {
//    string reversed = str1; // Создаем копию строки для изменения
//    int len = str1.length();
//    for (int i = 0; i < len; i++) { // Исправлено условие цикла
//        reversed[i] = (str1[i] == '0') ? '1' : '0'; // Используем тернарный оператор
//    }
//    return reversed; // Возвращаем измененную строку
//}
//
//char Keane(int n) {
//    string str1 = "0"; // Начальная строка
//    string str2 = str1 + revers(str1); // Генерация следующей строки
//    string strAll = str1 + str2; // Объединяем строки
//
//    // Генерация последовательности до n
//    while (strAll.length() < n) {
//        str1 = strAll; // Обновляем str1
//        str2 = str1 + revers(str1); // Генерируем новую строку
//        strAll += str2; // Объединяем
//    }
//
//    return strAll[n - 1]; // Возвращаем n-й бит (индекс n-1)
//}

//int remainderInBaseK(int k, int m, const string& n) {
//    long long remainder = 0; // Переменная для хранения остатка
//    for (char digit : n) {
//        // Преобразуем символ в соответствующее значение
//        int value;
//        if (digit >= '0' && digit <= '9') {
//            value = digit - '0'; // Для цифр от 0 до 9
//        }
//        else {
//            value = digit - 'A' + 10; // Для букв от A до Z
//        }
//
//        // Обновляем остаток
//        remainder = (remainder * k + value) % m;
//    }
//    return remainder; // Возвращаем остаток
//}

//string getFraction(int numerator, int denominator) {
//    string result;
//    // Целая часть
//    result += to_string(numerator / denominator);
//    numerator %= denominator;
//
//    if (numerator == 0) {
//        return result; // Если нет дробной части
//    }
//
//    result += '.';
//    map<int, int> remainderMap; // Для отслеживания остатков
//    vector<int> decimals; // Для хранения дробной части
//    int index = 0;
//
//    while (numerator != 0) {
//        // Если остаток уже встречался, значит, начинается период
//        if (remainderMap.find(numerator) != remainderMap.end()) {
//            int start = remainderMap[numerator];
//            // Добавляем не периодическую часть
//            for (int i = 0; i < start; i++) {
//                result += to_string(decimals[i]);
//            }
//            // Добавляем период в скобках
//            result += '(';
//            for (int i = start; i < decimals.size(); i++) {
//                result += to_string(decimals[i]);
//            }
//            result += ')';
//            return result;
//        }
//
//        // Запоминаем текущий остаток и его индекс
//        remainderMap[numerator] = index++;
//        numerator *= 10;
//        decimals.push_back(numerator / denominator);
//        numerator %= denominator;
//    }
//
//    // Если нет периода, просто добавляем дробную часть
//    for (int digit : decimals) {
//        result += to_string(digit);
//    }
//
//    return result;
//}


int main() {

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

           //ifstream inputFile("input.TXT");
        //ofstream outputFile("output.TXT");

        //int a, b, c;
        //inputFile >> a >> b >> c;

        //set<string> sums; // Для хранения уникальных сумм

        //// Перебираем все возможные комбинации
        //vector<int> numbers = { a, b, c };
        //cout << a<<" " << b <<" " << c<<endl;
        //do {
        //    // Складываем в порядке: (x + y) + z
        //    string sum1 = customAdd(numbers[0], numbers[1]);
        //    string finalSum1 = customAdd(stoi(sum1), numbers[2]);
        //    sums.insert(finalSum1);

        //    for(auto & v : sums) {
        //        cout << v << " ";
        //    }
        //    cout << endl;

        //    // Складываем в порядке: (x + z) + y
        //    string sum2 = customAdd(numbers[0], numbers[2]);
        //    string finalSum2 = customAdd(stoi(sum2), numbers[1]);
        //    sums.insert(finalSum2);

        //    for (auto& v : sums) {
        //        cout << v << " ";
        //    }
        //    cout << endl;

        //    // Складываем в порядке: (y + z) + x
        //    string sum3 = customAdd(numbers[1], numbers[2]);
        //    string finalSum3 = customAdd(stoi(sum3), numbers[0]);
        //    sums.insert(finalSum3);

        //    for (auto& v : sums) {
        //        cout << v << " ";
        //    }
        //    cout << endl;

        //} while (next_permutation(numbers.begin(), numbers.end()));

        //// Получаем результаты
        //if (sums.size() > 1) {
        //    outputFile << "YES" << endl;
        //}
        //else {
        //    outputFile << "NO" << endl;
        //}

        //// Выводим уникальные суммы в порядке возрастания
        //vector<string> resultSums(sums.begin(), sums.end());
        //sort(resultSums.begin(), resultSums.end()); // Сортируем сумму
        //for (const auto& s : resultSums) {
        //    outputFile << s << endl;
        //}

        //inputFile.close();
        //outputFile.close();

            // Задание 2

   // Задание 3

//ifstream inputFile("input.txt");
//ofstream outputFile("output.txt");
//
//float num1, num2;
//inputFile >> num1 >> num2;

//if (num1 > num2) {
//    outputFile << ">";
//}
//else if (num1 < num2) {
//    outputFile << "<";
//}
//else if (num1 == num2) {
//    outputFile << "=";
//}

//outputFile << num1 * num2;
//
//inputFile.close();
//outputFile.close();

   // Задание 3

   // Задание 4

//ifstream inputFile("input.txt");
//ofstream outputFile("output.txt");
//
//string num1, num2;
//inputFile >> num1 >> num2;
//
//set<long long> one = sdvig(num1);
//set<long long> two = sdvig(num2);
//
//long long maxDifference = LLONG_MIN; // Инициализируем максимальную разность
//
// Находим максимальную разность
//for (long long x : one) {
//    for (long long y : two) {
//        maxDifference = max(maxDifference, x - y);
//    }
//}
//
//outputFile << maxDifference;
//
//outputFile << num1 - num2;
//
//inputFile.close();
//outputFile.close();

// Задание 4

// Задание 5

//ifstream inputFile("input.txt");
//ofstream outputFile("output.txt");
//
//int n;
//inputFile >> n;
//
////cout << Keane(n);
//
//int stp = pow(2, n);
//
//outputFile << stp;
//
//inputFile.close();
//outputFile.close();

// Задание 5

// Задание 6

//ifstream inputFile("input.txt");
//ofstream outputFile("output.txt");
//
//string line;
//
//if (getline(inputFile, line)) {
//    size_t pos = line.find('/');
//    int A = stoi(line.substr(0, pos));
//    int B = stoi(line.substr(pos + 1));
//
//    string result = getFraction(A, B);
//    outputFile << result;
//}
//
////int result = remainderInBaseK(k, m, n);
//
////cout << result << endl;
//
//inputFile.close();
//outputFile.close();

// Задание 6

// Задание 7

ifstream inputFile("input.txt");
ofstream outputFile("output.txt");

vector<int> arr;

int A, B, K;
inputFile >> A >> B >> K;

// Переменная для хранения K-й цифры после запятой
int digit = 0;

// Находим K-ю цифру после запятой
int remainder = A % B; // Остаток от деления
for (int i = 0; i < K; i++) {
    remainder *= 10; // Умножаем остаток на 10
    digit = remainder / B; // Получаем следующую цифру
    remainder = remainder % B; // Обновляем остаток
    arr.push_back(digit);
}

for (auto& v : arr) {
    cout << v << " ";
}

cout<<endl;
cout << digit<<endl;

// Записываем результат в файл
outputFile << digit << endl;

inputFile.close();
outputFile.close();

// Задание 7

    return 0;
}
