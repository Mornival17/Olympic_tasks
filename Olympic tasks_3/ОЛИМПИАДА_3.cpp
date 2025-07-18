#include <string>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

    // Задание №1

	//string str = "емама нигер папа ерёма еруга жижа ежиииии";

	//int len = str.length();

	//int inc = 0;

 //   bool flag = false;

 //   for (int i = 0; i < len; i++) { // Изменено len - 1 на len
 //       if ((str[i] == ' ') && str[i+1] == 'е') { // Изменено str[i + 1] на str[i]
 //           inc++;
 //           if (str[0] == 'е') {
 //               flag = true;
 //           }
 //       }
 //   }

 //   cout << ((flag) ? inc + 1 : inc);

    // Задание №1

        // Задание №2


   //string str = "el;wkfwerf:::3r3f w r f 33f w:: 3 fw;:: f rg3r :: f fw";

   // int len = str.length();

   // int inc = 0;

   // for (int i = 0; i < len; i++) {
   //     if (str[i] == ':') {
   //         str[i] = '%';
   //         inc++;
   //     }
   // }

   // cout << inc << " "<<endl;
   // cout << str;

            // Задание №2

            // Задание №3

    //string str = "укпук.пу.ук..укм.км.к.у.м.к .к. .ук. м.ук .му. м.у. .у";

    //int len = str.length();

    //int inc = 0;

    //for (size_t i = 0; i < str.length(); ) {
    //    if (str[i] == '.') {
    //        str.erase(i, 1); 
    //       inc++; 
    //    }
    //    else {
    //        i++; 
    //    }
    //}

    //cout << inc << " " << endl;
    //cout << str <<endl;

            // Задание №3


            // Задание №4


   //string str = "аннаа онноо       аонна";

   //int len = str.length();

   //int sim = 0;

   //int inc = 0;

   //for (int i = 0; i < len; i++) {
   //    if (str[i] == 'а') {
   //        str[i] = 'о';
   //        inc++;
   //    }
   //    if (str[i] != ' ') {
   //        sim++;
   //    }
   //}

   //cout << inc << " "<<endl;
   //cout << str<<endl;
   //cout << sim << endl;

            // Задание №4


                // Задание №5

    //string str = "амадлДЛВПВЫШДМ";
    //string lowerStr; // новая строка для хранения результата

    //int len = str.length();

    //for (int i = 0; i < len; i++) {
    //    lowerStr += tolower(str[i]); // добавляем преобразованный символ в новую строку
    //}
    //// выводим результат
    //cout << lowerStr << endl;

            // Задание №5


                    // Задание №6

    //string str = "а оало адодвылааооао а оао а а ао а оо";

    //int len = str.length();

    //int inc = 0;

    //for (size_t i = 0; i < str.length(); ) {
    //    if (str[i] == 'а') {
    //        str.erase(i, 1); 
    //       inc++; 
    //    }
    //    else {
    //        i++; 
    //    }
    //}

    //cout << inc << " " << endl;
    //cout << str <<endl;

    // Задание №6



 // Задание №7 
 
   //string str = "прлпррп пр рпрпрр прпр рп рпр пор";

   // int len = str.length();

   // int inc = 0;

   // for (int i = 0; i < len/2; i++) {
   //     if (str[i] == 'п') {
   //         str[i] = '*';
   //         inc++;
   //     }
   // }

   // cout << inc << " "<<endl;
   // cout << str;

 // Задание №7


 // Задание №8

//   string str = " прлп     ррп пр           рпрп  рр пр пр   рп   рпр п ор";
//
//    int len = str.length();
//
//    int inc = 0;
//
//    bool flag = false;
//
//    for (int i = 0; i < len; i++) {
//        if (str[i] == ' ' && str[i+1] != ' ') {
//            inc++;
//        }           if (str[0] != ' ') {
//            flag = true;
//}
//    }
//
//    cout << ((flag) ? inc+1 : inc)<<endl;


 // Задание №8


 // Задание №9

//string str = "клп  лдап  цдла лц цла цлджацдлва цдвлац длав длвадцвал";
//
//string str2;
//cin >> str2;
//
//int inc = 0;
//
//size_t pos = str.find(str2);
//
//while (pos != string::npos) {
//    inc++;
//    pos = str.find(str2, pos + str2.length());
//}
//
//cout << inc << " " << endl; 
//cout << str << endl;

 // Задание №9

     // Задание №10

//string str;
//
//getline(cin, str);
//
//bool capitalize = true;
//
//for (size_t i = 0; i < str.length(); ++i) {
//   
//    if (isspace(str[i])) {
//        capitalize = true;
//    }
//    else if (capitalize) {
//        str[i] = toupper(str[i]);
//        capitalize = false; 
//    }
//}
//
//cout<< str << endl;


     // Задание №10

// МАССИВЫ

// Задание №1

int n;
cin >> n;
int arr[n];

for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

for (int j = 0; j < n; j++) {
    int max = ((arr[j] > max) ? max = arr[j] : arr[j]);
}

for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
cout << endl;
cout << max;

// Задание №1



return 0;
}
