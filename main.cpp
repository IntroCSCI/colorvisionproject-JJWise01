#include <iostream>
#include <cstring>
#include <cmath>
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

unsigned long hexValueIN = 0xFFFFFF;

float gammaRGB[3];

gammaRGB[0] = hexValueIN >> 16;
gammaRGB[1] = (hexValueIN & 0x00ff00) >> 8;
gammaRGB[2] = (hexValueIN & 0x0000ff);



for (int i=0; i < 3; i++)
  {
    gammaRGB[i] = (gammaRGB[i]/255);
    cout << gammaRGB[i] << "\n"; 
    if (gammaRGB[i] < 0.03928)
    {
      gammaRGB[i] = (gammaRGB[i]/12.92);
    }
    else
    {
      gammaRGB[i] = pow(((gammaRGB[i] + 0.055)/1.055),2.4);
    }
  }






// float redLinear = rgbRed/255;
// float greenLinear = rgbGreen/255;
// float blueLinear = rgbBlue/255;

HexToRGB output[5];

cout << "Give me a color";
cin >> inColor;
cout << "What would you like to name your file?";
cin >> fileName;


  return 0;
}

// (red*65536)+(green*256)+blue
// cout << hex << n << endl;
// at least 4.5 grade of AA (Best is 7)