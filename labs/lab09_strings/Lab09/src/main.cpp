#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lab 09


int main() {
    // Упражнения 1–3: демонстрация/анализ строковых функций (без ввода).
    // Использование 3х функций C++ для string/char
    string s = "Testing";
    char str[] = "Testing";
    char str2[] = "Real";
    char str3[100];
    cout << "Длина строки: " << s.length() << endl;
    cout << "Проверка пустая ли строка или нет: " << s.empty() << endl;
    cout << "Последний символ строки: " << s.back() << endl;
    cout << "Длина массива элементов: " << sizeof(str)-1 << endl;
    cout << "Склеивание двух массивов элементов: " << strcat(str2,str) << endl;
    cout << "Сравнение двух строк: больше ли \"Testing\" чем \"Real\"?: " << strcmp(str,str2) << endl;

   
    // (2)Объяснение использование типов, переменных и констант, а также, что будет напечатано в итоге
    
    // Char *str_s = “There is an example of a string constant”, *str_d, *pd;  - Создаём три поинтера, к первому присваиваем строковую константу

    // str_d = new char [strlen(str_s)+1]; - Выделяем 42 ячейки (длину *str_s + 1) под символы для str_d.

    // Pd = str_d; - присваиваем адрес str_d к pd

    // While (*str_d++ = *str_s++); - Мы сначала получаем адрес очередного символа, затем копируем его в str_s и смещаем каждый из поинтеров на 1 символ вперёд, когда это достигает 0, тогда While(0) - становится false и цикл останавливается.
	//     cout << pd << end; - выводим pd

    // Pd: 42,41,40,39..1


    // (3)Объяснение использование типов, переменных и констант, а также, что будет напечатано в итоге
    
    // Char *str = “     The first line of the paragraph”, *s; - Создаём 2 поинтера, поинтеру *str придаём адрес строковой константы.

    // S = str; - присваиваем адрес поинтера str к s.

    // Cout << s << endl; - Выводим адрес поинтера S (Это будет адрес поинтера str)

    // For (; *str == ‘ ‘; str++) - пока у нас в начале строковой константы идут пробелы, цикл for будет выполняться. (Поинтер сдвигается на 1 символ каждый проход). Под конец в *ptr будет храниться строковая константа начинающаяся с T….

    // While (*str) cout << *str++; - Пока цикл не дойдёт до последнего символа (\0) он будет выполняться, выводя следующий символ каждый раз. На последней итерации будет выведено ничего(но вывод всё равно произойдет в консоль).
    // Cout << endl; - Следующая строка.

    // Сначала будет напечатан адрес s, затем посимвольно строковая константа в *ptr
    

    // Упражнение 4: ввод количества слов и самих слов.
    
    int maxLength = 10;
    int maxWords = 20;
    int amountOfWords = 0;
    int pos = 0;
    int wordsCountedd = 0;
    string word;

    cout << "Type amount of words(Less than 20) to insert into array: ";
    cin >> amountOfWords;
    
    if (amountOfWords > maxWords) exit(1);
    string wordsArr[amountOfWords];

    for(;;) {

        if (wordsCountedd == amountOfWords) break;
        cout << "Type a word: " << endl;
        cin >> word;

        if (word.length() <= maxLength) {

            wordsArr[pos] = word;
            pos++;
            wordsCountedd++;

        } else {
            exit(1);
         }
     }
    
    
    cout << "Finished forming an array" << endl;
    cout <<  "Array(Only even words): ";
    
    for (pos = 1;pos <= wordsCountedd; pos+=2) {

        cout << wordsArr[pos] << " ";
    }

    cout << endl;

    pos = 0;
    amountOfWords = 0;
    int currentWord = 0;
    int sizeofcurr = 0;
    cout << "Type amount of words(Less than 20) to insert into array: ";
    cin >> amountOfWords;

    if (amountOfWords > maxWords) exit(1);

    char cArray[amountOfWords][11];

    for(currentWord = 0;;) {
        if (currentWord == amountOfWords) break;
        cout << "Type a word: " << endl;
        cin >> cArray[currentWord];
        currentWord++;
     }

    cout << "Finished forming an array" << endl;
    cout <<  "Array(Only even words): ";

    for (pos = 1;pos <= currentWord; pos+=2) {

        cout << cArray[pos];
        cout << " ";
    }
    cout << endl;
}
