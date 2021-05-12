#include <iostream>
#include <cstring>
using namespace std;

struct HexToRGB
{
  int red;
  int green;
  int blue;        
};



string decToHexa(int n)
{
    char hexaDeciNum[2];
  
    int i = 0;
    while (n != 0) {
  
        int temp = 0;
  
        temp = n % 16;
  
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
  
        n = n / 16;
    }
  
    string hexCode = "";
    if (i == 2) {
        hexCode.push_back(hexaDeciNum[0]);
        hexCode.push_back(hexaDeciNum[1]);
    }
    else if (i == 1) {
        hexCode = "0";
        hexCode.push_back(hexaDeciNum[0]);
    }
    else if (i == 0)
        hexCode = "00";
  
    return hexCode;
}

string convertRGBtoHex(int R, int G, int B)
{
    if ((R >= 0 && R <= 255)
        && (G >= 0 && G <= 255)
        && (B >= 0 && B <= 255)) {
  
        string hexCode = "#";
        hexCode += decToHexa(R);
        hexCode += decToHexa(G);
        hexCode += decToHexa(B);
  
        return hexCode;
    }
  
        return "-1";
}

int main()
{
string inColor;
string outColor;
string fileName;
HexToRGB converter;
converter.red = 5;

unsigned long fF = 0xFFFFFF;

int ExRed = fF >> 16;
int ExGreen = (fF & 0x00ff00) >> 8;
int ExBlue = (fF & 0x0000ff);

HexToRGB output[5];

cout << "Give me a color";
cin >> inColor;
cout << "What would you like to name your file?";
cin >> fileName;

cout << ExRed;
cout << ExGreen;
cout << ExBlue;

  return 0;
}

// (red*65536)+(green*256)+blue
// cout << hex << n << endl;