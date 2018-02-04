#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int stringToInt(const string& s)
{
   istringstream i(s);
   int x;
   if (i >> x)
     return x;
   // 这儿进行一些错误处理...
   return 0;
}
