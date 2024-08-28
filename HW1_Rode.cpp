#include <iostream>
#include <cstring>

#include<map>

int main()
{
    setlocale(LC_ALL, "ru");

    // вывод символов и ASCII hex-code oct-code
      /*char alpha[] = "abcdefghihjklmnopqrstuvwxyz";
      int sz = strlen(alpha);
      for (size_t i{0}; i < sz; ++i)
      {
          char ch = alpha[i];
          std::cout << '\'' << ch << '\''
                    << " = " << std::dec << int(ch)
                    << " = 0" << std::oct << int(ch)
                    << " = 0x" << std::hex << int(ch) << '\n';
      }*/

    // first
    std::cout << "\"To be\n\tor not\n\t\tto be...\"\n\t\t\t\\Shakespear\\\n";

    //second
    std::cout << "насколько сильно любиш C++ ->";

    int32_t count{ 0 };
    std::string str{ "I love C++" };
    std::cin >> count;

    for(size_t iter{ 0 }; iter < count; ++iter) {
        std::cout << str + '\n';
        str = '\t' + str;
    }

    std::cout << std::endl;

    //third house
    const int houseMatrixSize = 10;
    bool houseMatrix[houseMatrixSize][houseMatrixSize] = { { 0, 0, 0, 0, 1, 1, 0, 1, 1, 0 },
                                                         { 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },
                                                         { 0, 0, 1, 0, 0, 0, 0, 1, 1, 0 },
                                                         { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
                                                         { 1, 0, 1, 0, 0, 0, 0, 1, 0, 1 },
                                                         { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 },
                                                         { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 },
                                                         { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },
                                                         { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0 },
                                                         { 0, 0, 1, 1, 1, 1, 1, 1, 0, 0 } };

    for(size_t i{0}; i < houseMatrixSize; ++i) {
        for(size_t j{ 0 }; j < houseMatrixSize; ++j)
            houseMatrix[i][j] ? std::cout << '*' : std::cout << ' ';
        std::cout << std::endl;
    }

    //fourth
    std::map<std::string, std::string> myResume;
    myResume["1.Name"] = "Yevhenii";
    myResume["2.Surname"] = "Rode";
    myResume["3.Profession"] = "Software Engineer";
    myResume["4.Charakter"] = "Technik Freak";

    for(auto element : myResume) {
        std::cout << element.first<<" - " <<element.second<< '\n';
        
    }


    return 0;
}