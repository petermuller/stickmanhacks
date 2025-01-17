// Made by Peter "Stickman" Muller

#include "StdAfx.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int num;                // Number
    int max;                // Last #
    int off;                // Address of start
    string space;

    cout << "Stickman's Image Mod Address Maker" << endl;
    cout << endl;
    cout << "Enter a large number" << endl;
    cin >> max;
    cout << endl;
    cout << "Enter the first image mod address without the '81'" << endl;
    cin >> hex >> off;
    cout << endl;

    ofstream file("addresses.txt");
    file << "Image Mod Addresses" << endl;
    file << endl;
    for (num = 0; num <= max; num++)
    {
            file << "81" << hex << uppercase << num * 48 + off << " ????" << endl;
			cout << "81" << hex << uppercase << num * 48 + off << " ????" << endl;
    }
    file << endl;
    file << "This list was generated by Stickman's Image Mod Address Maker. For more information, check out his blog at http://stickman221.wordpress.com" << endl << "Enjoy!" << endl;
    file.close();

    cout << "offsets.txt created!" << endl;

    return 0;
}