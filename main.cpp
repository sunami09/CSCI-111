#include <iostream>

using namespace std;

int main(){
  int original;
  int replacement;
  const double PI = 3.14;
  double area;
  int quotient;
  double replacementArea;
  
  cout << "What is the original?\n";
  cin >> original;
  cout << "What is the replacement?\n";
  cin >> replacement;
  
  area = PI * (original/2) * (original/2);
  quotient = area / ( PI * (replacement/2) * (replacement/2) );
  replacementArea = quotient * ( PI * (replacement/2) * (replacement/2) );
  
  cout << "You should get at least " << quotient << " of size " << replacement << endl;
  cout << " which will give you " << (replacementArea / area) * 100 << "% of the original.\n";
  
  return 0;
}