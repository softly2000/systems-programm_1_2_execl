/*-------------------- true ----------------------*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(string& fileName) 
{
    ifstream file(fileName);
    if (!file.is_open()) 
    {
        cout << "Ошибка открытия файла: " << fileName << endl;
    }

    cout << "\nСодержимое файла:\n";
    cout << "------------------------------\n";
    string line;
    while (getline(file, line)) 
    {
        cout << line << endl;
    }
    cout << "------------------------------\n";
    file.close();
}

void writeFile(string& fileName) 
{
    ofstream outFile(fileName, ofstream::app);
    if (!outFile.is_open()) 
    {
        cout << "Ошибка создания файла: " << fileName << endl;
    }

    outFile << "\nusername: Sulaimnaov\n";
    int num;
    cout << "\nЗапись в файл: ";
    cout << "\nВведите число - ";cin >> num;
    outFile << "number: " << (num + 5 < 10 ?  num*num : num) << endl;
    outFile.close();
}

int main() 
{
    cout << "\n\tФайловые операции\n";
    string fileName;
    cout << "\nСоздание файла: ";
    cout << "\nВведите имя файла - ";
    cin >> fileName;
    
    writeFile(fileName);
    readFile(fileName);
    
    /*
    cout << "Тест 1: Запись в файл с числом 5\n";
    string testFile1 = "testFile1.txt";
    writeFile(testFile1);
    readFile(testFile1);

    cout << "Тест 2: Запись в файл с числом 15\n";
    string testFile2 = "testFile2.txt";
    writeFile(testFile2);
    readFile(testFile2);*/
}







#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(string& fileName) 
{
    ifstream file(fileName);
    if (!file.is_open()) 
    {
        cout << "Ошибка открытия файла: " << fileName << endl;
    }

    cout << "Содержимое файла:\n";
    cout << "------------------------------\n";
    string line;
    while (getline(file, line)) 
    {
        cout << line << endl;
    }
    cout << "------------------------------\n";
    file.close();
}

void writeFile(string& fileName) 
{
    ofstream outFile(fileName, ofstream::app);
    if (!outFile.is_open()) 
    {
        cout << "Ошибка создания файла: " << fileName << std::endl;
    }

    outFile << "username: Sulaimnaov\n";
    int num;
    cout << "\nЗапись в файл: ";
    cout << "\nВведите число - ";cin >> num;

    outFile << "number: " << (num + 5 < 10 ?  num* num : num) << endl;
    outFile.close();
}

int main() 
{
    cout << "Файловые операции\n\n";
    string fileName;
    cin >> fileName;
    
    writeFile(fileName);

    readFile(fileName);
}

/*------------ -1 ---------------------*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile() {
    string reading_File;
    cout << "Чтение файла:\n";
    cout << "Введите имя файла - ";
    cin >> reading_File;
    
    ifstream file(reading_File);
    
    string line;
    
    if(!file.is_open()) {
        cout << "Ошибка открытия файла!\n";
    } else {
        cout << "\n\nСодержимое файла:";
        cout << "\n------------------------------";
        while(getline(file,line)) {
            cout << line << endl;
        }
        cout << "------------------------------";
        file.close();
    }
}

int main() 
{
    cout << "\n\tРабота с файлами\n";
    string creating_File;
    cout << "\nСоздание файла: \n";
    cout << "Введите имя файла - "; 
    cin >> creating_File;
    
    ofstream outFile(creating_File,ofstream::app);
    
    if(!outFile) {
        cout << "Ошибка при создании файла!";
        return 0;
    } else {
        outFile << "\nusername: Sulaimnaov" << endl;
        
        int num;
        cout << "\nЗапись в файл: \n";
        cout << "Введите число - ";
        cin >> num;
        
        if(num + 5 < 10)
            outFile << "number:" << num*num << endl;
        else
            outFile << "number:" << num << endl;
           
    }
    outFile.close();
    
    cout << "\n";
    readFile();
}







/*------------- -0 ----------------*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile() {
    
    string reading_File;
    cout << "Чтение файла:\n";
    cout << "Введите имя файла - ";
    cin >> reading_File;
    
    ifstream file(reading_File);
    
    string line;
    
    if(!file.is_open()) {
        cout << "Ошибка открытия файла!\n";
    } else {
        while(getline(file,line)) {
            cout << line << endl;
        }
        file.close();
    }
}

int main() 
{
    string creating_File;
    cout << "\nСоздание файла: \n";
    cout << "Введите имя файла - "; 
    cin >> creating_File;
    
    ofstream outFile(creating_File,ofstream::app);
    
    if(!outFile) {
        cout << "Ошибка при создании файла!";
        return 0;
    } else {
        outFile << "\nusername: Sulaimnaov" << endl;
        
        int num;
        cout << "\nЗапись в файл: \n";
        cout << "Введите число - ";
        cin >> num;
        
        if(num + 5 < 10)
            outFile << "number:" << num*num << endl;
        else
            outFile << "number:" << num << endl;
           
    }
    outFile.close();
    
    cout << "\n";
    readFile();
}





/*------------- 0 Вар-----------------*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile() {
    
    ifstream file("fileName.txt");                                 
    string line; 
    
    if(!file.is_open()){
        cout << "Ошибка открытия файла!\n";
    } else {  
        while(getline(file,line)) {    
            cout << line << endl;      
        } 
        file.close();                
    }                            
}

int main()
{  
    ofstream outFile("fileName.txt.cpp",ofstream::app);//файл в режиме добавления
    //outFile.open("myFile"); //можно так
    if(!outFile) {
        cout << "Ошибка при создании файла!";
        return 0;
    } else {
        outFile << "\nSulaimanov" << endl;

        int num;
        cout << "\nВведите число: ";
        cin >> num;

        if(num + 5 < 10) 
            outFile << num*num << endl;
        else  
            outFile << num << endl;
    }
    outFile.close();
    
    cout << "\n\n";
    readFile();
}


/*--------------- 1 Вар ----------------*/


#include <iostream>
#include <fstream>
using namespace std;

int read() {
    
    ifstream file("myFile");        
        string line;
        int num;
        
        file >> line;
        file >> num;
        
        cout << line;
        cout << "\n";
        cout << num;
    file.close();
    
    return 1;
}

int main()
{
    ofstream outFile("myFile");
    
    if(!outFile){
      cout<<"Error creating file"<<endl;
      return 0;
    }
    
    outFile << "Sulaimanov" << endl;
    
    int num;
    cout << "\nВведите число: ";cin >> num;
    
    if(num + 5 < 10) {
        outFile << num*num << endl;
    } else {
        outFile << num << endl;
    }
    
    outFile.close();
    cout << "\n\n";
    read();
}



/*------------------ 2 Вар ------------------*/

#include <iostream>
#include <fstream>
using namespace std;

//02-read

int read() {
    
    ifstream file("myFile");
    //file.open("myFile");
    string line;
    
    while(getline(file,line)) {
        cout << line << endl;
    }
    
    file.close();
    return 1;
}

//01-wr

int main()
{
    ofstream outFile("myFile");
    //outFile.open("myFile");
    outFile << "Sulaimanov" << endl;
    
    int num;
    cout << "\n------------- 01-wr --------------\n";
    cout << "Введите число - ";cin >> num;
    
    if(num + 5 < 10) {
        outFile << num*num << endl;
    } else {
        outFile << num << endl;
    }
    
    outFile.close();
    
    cout << "\n\n----------- 02-read -------------\n";
    read();
}