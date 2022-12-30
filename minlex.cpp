#include <iostream>
#include <string>

int main()
{
   int k, i;
   
   std::string s, snou;

   std::cin >> k >> s;
   
   snou = s[0];

   for (i = 1; (i < s.size()) && (k != 0); ++i)
   {
      while ((!snou.empty()) && (snou.back() > s[i]) && (k != 0))
      {
         snou.pop_back();
         k--;
      }

      snou.push_back(s[i]);
   }

   if (k == 0)
      for (; i < s.size(); ++i)
         snou.push_back(s[i]);
   else
      while (k--)
         snou.pop_back();
   
   std::cout << snou;

   return 0;
}