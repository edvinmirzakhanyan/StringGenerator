#include <iostream>
#include <string>
#include <fstream>

int main ()
{
    std::string str = "ZZZZ";
    std::ofstream fout;
    fout.open("Strings.txt");
    int size;
    int icounter; 

  while (str.size() != 0)
    {
      size = str.size();
      icounter = size - 1;
        while (str[0] >= 'A')
        {
            while (str[icounter] >= 'A')
            {
                fout << str + '\n';
                str[icounter] -= 1;
            }
            if (size != 1) { --icounter; }
            else { break; }
            if (str[icounter] > 'A')
            {
                str[icounter + 1] = 'Z';
                --str[icounter];
                icounter = size - 1;
                continue;
            }
            else 
            {
                str[icounter + 1] = 'Z';
                --str[icounter];
            }
        }
      if (size != 0)
      {
        str[0] = 'Z';
        str.pop_back();
      }
    }
    fout.close();
}