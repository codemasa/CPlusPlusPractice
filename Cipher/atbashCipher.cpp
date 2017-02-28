#include <iostream>
#include <string>
#include <algorithm>
#include "atbashCipher.h"

using namespace::std;




std::string
AtbashCipher::decode(std::string message)
{
  for(int i=0 ; i<message.length(); i++){

    if(message[i] >= 'a' && message[i] <= 'z'){
      message[i] = message[i] + 25 - (2*(message[i]-'a'));

    }
    if(message[i] >= 'A' && message[i] <= 'Z')
    {
      message[i] = message[i] + 25 - (2*(message[i]-'A'));
    }

  }
  return message;
}
