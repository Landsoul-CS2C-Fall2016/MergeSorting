// MergeSorting.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <list> 
#include <string>

using namespace std;

void merge(list<string> *a, list<string> *b, list<string> *output)
{
   while (!a->empty() && !b->empty()) {
      if (a->front() > b->front()) {
         output->push_back(b->front());
         b->pop_front();
      } else {
         output->push_back(a->front());
         a->pop_front();
      }
   }

   while (!a->empty()) {
      output->push_back(a->front());
      a->pop_front();
   }

   while (!b->empty()) {
      output->push_back(b->front());
      b->pop_front();
   }
}

int main()
{
   list<string> officeThings = { "Sharpener", "boringEmployee", "Stapler", "Chairs" };
   list<string> funThings = { "ballPits", "VGames", "ChrisRock", "bikeTricks", "starWars" };
   list<string> okayThings;
   cout << "The number of things in officeThings before sort is: " << officeThings.size() << endl;
   cout << "The number of things in funThings before sort is: " << funThings.size() << endl;
   merge(&officeThings, &funThings, &okayThings);
   cout << "The number of things in officeThings after sort is: " << officeThings.size() << endl;
   cout << "The number of things in funThings after sort is: " << funThings.size() << endl;
   cout << "The number of things in OkayThings is: " << okayThings.size() << endl;

   return 0;
}

