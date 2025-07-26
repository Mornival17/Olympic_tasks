#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // Для rand() и srand()
#include <ctime>   // Для time()
#include <fstream>
#include <limits.h> // Для INT_MAX
#include <algorithm>
#include <set>
#include <map>

using namespace std;

// Функция для проверки, является ли число простым
//bool isPrime(int num) {
//    if (num < 2) return false;
//    for (int j = 2; j * j <= num; j++) {
//        if (num % j == 0) return false;
//    }
//    return true;
//}

//long long toSeconds(int hours, int minutes, int seconds) {
//    return hours * 3600 + minutes * 60 + seconds;
//}
//
//// Функция сравнения для сортировки
//bool compareTimes(const vector<int>& t1, const vector<int>& t2) {
//    return toSeconds(t1[0], t1[1], t1[2]) < toSeconds(t2[0], t2[1], t2[2]);
//}

int main() {


    // Задание 6
    //ifstream inputFile("INPUT.TXT");
    //ofstream outputFile("OUTPUT.TXT");

    //int n;
    //inputFile >> n;

    //vector<int> arr(n);
    //for (int i = 0; i < n; i++) {
    //    inputFile >> arr[i];
    //}

    //// Подсчет частоты каждого числа
    //map<int, int> freq;
    //for (int num : arr) {
    //    freq[num]++;
    //}

    //// Найти число с максимальной частотой (если несколько, то минимальное)
    //int maxCount = 0;
    //int minNumWithMaxCount = INT_MAX;

    //for (const auto& entry : freq) {
    //    if (entry.second > maxCount) {
    //        maxCount = entry.second;
    //        minNumWithMaxCount = entry.first;
    //    }
    //    else if (entry.second == maxCount) {
    //        minNumWithMaxCount = min(minNumWithMaxCount, entry.first);
    //    }
    //}

    //// Перемещение всех найденных чисел в конец
    //vector<int> result;
    //vector<int> toBeMoved;

    //for (int num : arr) {
    //    if (num == minNumWithMaxCount) {
    //        toBeMoved.push_back(num);
    //    }
    //    else {
    //        result.push_back(num);
    //    }
    //}

    //// Соединяем обе части
    //result.insert(result.end(), toBeMoved.begin(), toBeMoved.end());

    //// Запись результата в выходной файл
    //for (int num : result) {
    //    outputFile << num << " ";
    //}

    //inputFile.close();
    //outputFile.close();
    // Задание 6

    // Задание 5
    //ifstream inputFile("INPUT.TXT");
    //ofstream outputFile("OUTPUT.TXT");

    //int N; // Количество временных моментов
    //inputFile >> N;

    //vector<vector<int>> times(N, vector<int>(3)); // Массив для хранения часов, минут и секунд

    //// Считываем временные моменты из файла
    //for (int i = 0; i < N; i++) {
    //    inputFile >> times[i][0] >> times[i][1] >> times[i][2]; // Часы, минуты, секунды
    //}

    //// Сортируем временные моменты
    //sort(times.begin(), times.end(), compareTimes);

    //// Выводим отсортированные моменты времени в выходной файл
    //for (const auto& time : times) {
    //    outputFile << time[0] << " " << time[1] << " " << time[2] << endl; // Вывод формата HH MM SS
    //}

    //// Закрываем файлы
    //inputFile.close();
    //outputFile.close();
    // Задание 5


    // Задание 2
    //fstream inputFile("input.txt");
    //ofstream outputFile("output.txt");

    //int M, K, min = INT_MAX, max = INT_MIN, indexMax = -1, indexMin = -1, proiz = 1, sum = 0;
    //inputFile >> M; // Чтение количества элементов

    //vector<int> arr;

    //// Чтение элементов массива
    //for (int i = 0; i < M; i++) {
    //    inputFile >> K;
    //    arr.push_back(K);
    //}

    //// Поиск суммы положительных элементов, максимума и минимума
    //for (int v : arr) {
    //    if (v >= 0) {
    //        sum += v;
    //    }
    //    if (v > max) {
    //        max = v;
    //    }
    //    if (v < min) {
    //        min = v;
    //    }
    //}

    //// Поиск индексов максимума и минимума
    //for (int i = 0; i < M; i++) {
    //    if (arr[i] == max) {
    //        indexMax = i;
    //    }
    //    if (arr[i] == min) {
    //        indexMin = i;
    //    }
    //}

    //if (indexMin < indexMax) {
    //    for (int i = indexMin + 1; i < indexMax; i++) {
    //        proiz *= arr[i];
    //    }
    //}
    //else {
    //    for (int i = indexMax + 1; i < indexMin; i++) {
    //        proiz *= arr[i];
    //    }
    //}

    //// Запись результата в файл
    //outputFile << sum << " " << proiz;

    //// Закрытие файлов
    //inputFile.close();
    //outputFile.close();
    // Задание 2

    // Задание 3
    //fstream inputFile("input.txt");
    //ofstream outputFile("output.txt");

    //int M;
    //inputFile >> M; // Чтение количества тестов

    //vector<int> positions(M);
    //for (int i = 0; i < M; i++) {
    //    inputFile >> positions[i]; // Чтение позиций
    //}

    //string primeSequence; // Строка для хранения последовательности простых чисел
    //int count = 0; // Счетчик простых чисел
    //int num = 2; // Начинаем с первого простого числа

    //// Генерация последовательности простых чисел
    //while (primeSequence.size() < 10000) { // Генерируем до 10000 символов
    //    if (isPrime(num)) {
    //        primeSequence += to_string(num);
    //    }
    //    num++;
    //}

    //// Запись результата в выходной файл
    //for (int i = 0; i < M; i++) {
    //    outputFile << primeSequence[positions[i] - 1]; // Позиции начинаются с 1
    //}

    //// Закрытие файлов
    //inputFile.close();
    //outputFile.close();
    // Задание 3

    return 0;
}
