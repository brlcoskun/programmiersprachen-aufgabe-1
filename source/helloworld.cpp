#include <iostream>
  
int kleinste_zahl();

int main()
{
  std::cout << "Hello, World!\n";   // neue zeile 

  int result = kleinste_zahl();
  std::cout << "Kleinste Zahl ist: " << result << " \n" ;
  return 0;
}

int kleinste_zahl()
{
  int potential = 20;    // anfangszahl
  bool found_number = true;  
  
  do{
    found_number = true;
    for (int i = 2; i < 21; ++i) {
      if(potential % i != 0){
        found_number = false;
        potential+=20;
      }
    }
 
    if(found_number == true){
      return potential;

    }

  }while(!found_number);
    return -1;

}