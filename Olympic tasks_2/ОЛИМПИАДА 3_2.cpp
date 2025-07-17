#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDuplicates(const std::vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        // Проверяем, есть ли элемент уже в хэш-таблице
        if (seen.find(num) != seen.end()) {
            return true; // Найден дубликат
        }
        seen.insert(num); // Добавляем элемент в хэш-таблицу
    }
    return false; // Дубликатов нет
}

int main()
{
    //Задание 1

    //int n;
    //cin >> n;
    //int* arr = new int[n];

    //int max = 0;

    //int summ = 0;

    //for (int i = 0; i < n; i++) {
    //    cin >> arr[i];
    //}

    //for (int j = 0; j < n; j++) {
    //    max = ((arr[j] > max) ? max = arr[j] : max);
    //}

    //for (int i = 0; i < n; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;
    //cout << max<< endl;

    //for (int i = 0; i < n; i++) {
    //    summ += arr[i];
    //}

    //for (int i = 0; i < n; i++) {
    //    if (arr[i] == 0) {
    //        arr[i] = summ / n;
    //    }
    //}

    //for (int i = 0; i < n; i++) {
    //    cout << arr[i] << " ";
    //}

    //delete[] arr;

    //Задание 1

     //Задание 2

   /* int n;
    cin >> n;
    int* arr = new int[n];

    vector<int> arr2;
    vector<int> arr3;

    int max = 0;
    int index = 0;

    int summ = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) {
        max = arr[0];
        if (arr[j] < max) {
            max = arr[j];
            index = j;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << max<< endl;
    cout << index+1 << endl;



    cout << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            arr2.push_back(arr[i]);
        }
        else {
            arr3.push_back(arr[i]);
        }
    }

    for (auto& v : arr2) {
        cout << v << " ";
    }
    cout << endl;
    for (auto& v : arr3) {
        cout << v << " ";
    }

    delete[] arr;*/


     //Задание 2

     //Задание 3

    //int n;
    //cin >> n;
    //int* arr = new int[n];

    //int summ = 0;

    //for (int i = 0; i < n; i++) {
    //    cin >> arr[i];
    //}

    //for (int j = 0; j < n; j++) {
    //    if (j % 2 == 0) {
    //        summ += arr[j];
    //    }
    //}

    //cout << endl;
    //cout << summ<< endl;

    //for (int i = 0; i < n; i++) {
    //    if (arr[i] < 15) {
    //        arr[i] = arr[i] * 2;
    //    }
    //}

    //for (int i = 0; i < n; i++) {
    //    cout << arr[i] << " ";
    //}

    //delete[] arr;

     //Задание 3

     //Задание 4

//int n; 
//cin >> n;
//int* arr = new int[n];
//vector<int> vec;
//int index = 0;
//int max;
//
//for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//}
//max = arr[0];
//
//for (int i = 0; i < n; i++) {
//    max = ((arr[i] > max) ? max = arr[i] : max);
//    index = ((arr[i] == max) ? i : index);
//}
//
//cout << max << endl;
//cout << index << endl;
//
//for (int i = 0; i < n; i++) {
//    if (arr[i] % 2 != 0) {
//        vec.push_back(arr[i]);
//    }
//}
//
//for (auto& v : vec) {
//    cout << v << " ";
//}
//
//delete[] arr;

     //Задание 4


     //Задание 5

//int n;
//cin >> n;
//int* arr = new int[n];
//vector<int> vec;
//
//for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//}
//
//for (int i = 0; i < n - 1; i++) {
//    if ((arr[i] < 0) && (arr[i + 1] < 0)) {
//        cout << arr[i] << " " << arr[i + 1];
//    }
//}
//
//cout << endl;
//
//for (int i = 0; i < n; i++) {
//    if (find(vec.begin(), vec.end(), arr[i]) == vec.end()) {
//        vec.push_back(arr[i]);
//    }
//}
//
//for (auto& v : vec) {
//    cout << v << " ";
//}
//
//delete[] arr;

//Задание 5

     //Задание 6

//int n; 
//cin >> n;
//int* arr = new int[n];
//int max;
//
//for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//}
//max = arr[0];
//
//for (int i = 0; i < n; i++) {
//    max = ((arr[i] > max) ? max = arr[i] : max);
//}
//
//cout << max << endl;
//int cout_max = 0, count_min = 0;
//
//for (int i = 0; i < n; i++) {
//    if ((arr[i] > max) && (arr[i] != max)) {
//        cout_max++;
//    }
//    else if (arr[i] < max) {
//        count_min++;
//    }
//}
//cout << cout_max << " " << count_min << endl;
//
//int sum = 0;
//
//for (int i = 0; i < n; i++) {
//    if (arr[i] > 5) {
//        sum += arr[i];
//    }
//}
//
//cout << sum;
//
//delete[] arr;

     //Задание 6

     //Задание 7

//int n;
//cin >> n;
//int* arr = new int[n];
//int max, min;
//
//for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//}
//max = arr[0];
//min = arr[0];
//int ind_max = 0, ind_min = 0;
//
//for (int i = 0; i < n; i++) {
//    if (arr[i] > max) {
//        max = arr[i];
//        ind_max = i;
//    }
//    if (arr[i] < min) {
//        min = arr[i];
//        ind_min = i;
//    }
//}
//
//cout << max << " " << min<<endl;
//
//for (int i = 0; i < n; i++) {
//    if (arr[i] == max) {
//        int buf = arr[i];
//        arr[i] = arr[ind_min];
//        arr[ind_min] = buf;
//}
//}
//for (int i = 0; i < n; i++) {
//    cout << arr[i] << " ";
//}
//
//cout << endl;
//
//int sum = 0, prox = 1;
//
//for (int i = 0; i < n; i++) {
//    if (i % 2 == 0) {
//        sum += arr[i];
//    }
//    else if (i % 2 != 0) {
//        prox *= arr[i];
//    }
//}
//
//cout << sum<<" "<<prox;
//
//delete[] arr;

//Задание 7

//Задание 8

//int n;
//cin >> n;
//int* arr = new int[n];
//int max, min;
//
//for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//}
//
//int summ = 0;
//
//int sum = 0, prox = 1;
//
//for (int i = 0; i < n; i++) {
//    summ += arr[i];
//        sum += arr[i];
//                prox *= arr[i];
//}
//
//for (int i = 0; i < n; i++) {
//    if (arr[i] == 0) {
//        arr[i] = summ / n;
//    }
//}
//
//for (int i = 0; i < n; i++) {
//    cout << arr[i] << " ";
//}
//
//cout << endl;
//
//cout << sum << " " << prox;
//
//delete[] arr;

//Задание 8



//Задание 9

//int n;
//cin >> n;
//int* arr = new int[n];
//int* arr2 = new int[10];
//int* arr3 = new int[10];
//int* arr_buf = new int[10];
//int min;
//
//
//for (int i = 0; i < 10; i++) {
//    arr2[i] = rand() % 10;
//}
//for (int i = 0; i < 10; i++) {
//    arr3[i] = rand() % 10;
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    cout << arr2[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    cout << arr3[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    arr_buf[i] = arr2[i];
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    arr2[i] = arr3[i];
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    arr3[i] = arr_buf[i];
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    cout << arr2[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < 10; i++) {
//    cout << arr3[i] << " ";
//}
//
//cout << endl;
//for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//}
//min = abs(arr[0]);
//
//for (int i = 0; i < n; i++) {
//    if (abs(arr[i]) < min) {
//        min = arr[i];
//    }
//}
//
//for (int i = n - 1; i >= 0; --i) {
//    cout<<arr[i]<<" ";
//}
//
//cout << endl;
//
//cout << min <<endl;
//
//delete[] arr, arr2, arr3, arr_buf;


//Задание 9


//Задание 10

 int n;
 cin >> n;
int* arr = new int[n];

vector<int> vec;
vector<int> vec2;

for (int i = 0; i < n; i++) {
    arr[i] = rand() % 30;
}

vector<int> nums;
for (int i = 0; i < n; i++) {
    nums.push_back(arr[i]);
}

for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}


for (int i = 0; i < n; i++) {
    if ((find(vec.begin(), vec.end(), arr[i]) == vec.end())) {
        vec.push_back(arr[i]);
    }
    else {
        vec2.push_back(arr[i]);
    }
}

cout << endl;

for (auto& v : vec) {
    cout << v << " ";
}
cout << endl;

for (auto& v : vec2) {
    cout << v << " ";
}

cout << endl;

if (hasDuplicates(nums)) {
   cout << "00000000000000" << endl;
}
else {
    cout << "1111111111111111" <<endl;
}

for (int i = 0; i < n; i++) {
    if (arr[i] < 10) {
        arr[i] = 0;
    }
    else {
        arr[i] = 1;
    }
}
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}


delete[] arr;

//Задание 10

    return 0;
}
