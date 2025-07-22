#include <iostream>
#include <vector>

using namespace std;

//float zadanie_9(float a, int n) {
//
//	if (n == 0) {
//		return 1; 
//	}
//	if (n == 1) {
//		return a; 
//	}
//
//	if (n % 2 == 0) {
//		float href =  zadanie_9(a, n/2);
//		return href * href;
//	}
//	else if (n % 2 != 0) {
//		return a * zadanie_9(a, n-1);
//	}
//
//}

//void write(int n) {
//    std::cout << n << ' ';
//}
//void clear(int n);
//void set(int n);
//
//void clear(int n) { 
//    if (n > 0) {       
//        set(n - 1);    
//        write(-n);     
//        clear(n - 1);  
//    }
//}
//
//void set(int n) {      
//    if (n > 0) {       
//        set(n - 1);    
//        write(n);      
//        clear(n - 1);  
//    }
//}
//
//void fill(int n) {     
//    if (n > 0) {       
//        set(n - 1);    
//        write(n);      
//        fill(n - 2);   
//    }
//}

//void move(int n, int start, int finish) {
//    if (n > 0) {
//        int tmp = 6 - start - finish; 
//        if ((finish - start) % 3 == 1) {
//            move(n - 1, start, tmp); 
//            std::cout << n << ' ' << start << ' ' << finish << std::endl; 
//            move(n - 1, tmp, finish); 
//        }
//        else {
//            move(n - 1, start, finish); 
//            std::cout << n << ' ' << start << ' ' << tmp << std::endl; 
//            move(n - 1, finish, start); 
//            std::cout << n << ' ' << tmp << ' ' << finish << std::endl; 
//            move(n - 1, start, finish); 
//        }
//    }
//}

//void hanoy(int n, int start, int end) {
//
//	if (n == 1) {
//		cout << "Перемеитить блинчик " << n << " со столбика " <<start<< " на столбик "<<end<<endl;
//	}
//	else {
//		int buf = 6 - start - end;
//		hanoy(n - 1, start, buf);
//		cout << "Перемеитить блинчик " << n << " со столбика " << start << " на столбик " << end << endl;
//		hanoy(n - 1, buf, end);
//	}
//
//}

//int acerman(int m, int n) {
//
//	if (m == 0) {
//		return n + 1;
//	}	else if (m > 0 && n == 0) {
//		return acerman(m - 1, 1);
//	} else if (m > 0 && n > 0) {
//		return acerman(m - 1, acerman(m, n - 1));
//	}
//	return -1;
//}

//int countStairs(int n, int lastHeight) {
//
//	if (n == 0) {
//		return 1;
//	}
//
//	if (n < 0) {
//		return 0;
//	}
//
//	int count = 0;
//
//	for (int height = 1; height <= lastHeight; height++) {
//
//		count += countStairs(n - height, height - 1);
//	}
//
//	return count;
//}

//int rasb(int n, int heiN) {
//
//	if (n == 0) {
//		return 1;
//	}
//
//	if (n < 0) {
//		return 0;
//	}
//
//	int count = 0;
//
//	for (int i = 1; i <= heiN; i++) {
//		count += rasb(n - i, i);
//	}
//	return count;
//
//}

//void dvo(int n, int raz) {
//
//	if (n / raz != 0) {
//		dvo(n / raz, raz);
//	}
//	cout << n % raz;
//}

//void printReverse() {
//	int number;
//	std::cin >> number;
//
//	if (number == 0) {
//		return;
//	}
//
//	printReverse();
//
//	std::cout << number << std::endl;
//}


int main()
{

	setlocale(LC_ALL, "rus");

	// Задание 1

	//int n;

	//printReverse();

	// Задание 1

	// Задание 2

	//int n,raz;
	//cin>>n;
	//cin >> raz;

	//dvo(n, raz);

	// Задание 2

	// Задание 3

	//int n;
	//cin >> n;

	//int res = rasb(n, n);
	//cout << res;

	// Задание 3

	// Задание 4

	//int n, res;
	//cin >> n;

	//res = countStairs(n, n);
	//cout << res;


	// Задание 4


	// Задание 5

	//int n, m;
	//cin >> m >> n;
	//int g = acerman(m, n);
	//cout << g;

	// Задание 5

	// Задание 6

	//int n; 
	//cin >> n;
	//hanoy(n,1,3);

	// Задание 6

	// Задание 7

	//int n;
 //   std::cin >> n;
 //   move(n, 1, 3);

	// Задание 7

	// Задание 8

    //int n;
    //if (!(std::cin >> n)) {
    //    return 1;
    //}
    //fill(n);
    //std::cout << '\n';

	// Задание 8

	// Задание 9

	//int n;
	//float a;
	//cin >>a>>n;
	//float otv;
	//otv = zadanie_9(a, n);
	//cout << otv;

	// Задание 9

	return 0;
}
