#include <iostream>
#include "atbashCipher.h"
using namespace::std;
int main()
{
  AtbashCipher * atbash = new AtbashCipher();
  string input_line;
  while(cin) {
          cout << "Enter something to be encoded! or '~' to exit." << endl;
          getline(cin, input_line);
          if(input_line == "~"){
            cout << "exiting..." << endl;
            break;
          }
          cout << atbash->decode(input_line) << endl;

      };
      return 0;


}
