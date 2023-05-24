#include <string>
#include <iostream>
using namespace std;

#include "jantung.h"
#include "Manusia.h"File > Open > Project and select the .sln file

int main()
{
    manusia* varManusia = new manusia("jono");
    delete varManusia;
    return 0;
}
