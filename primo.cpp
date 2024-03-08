#include <iostream>

int main(){
  
  unsigned int primo;
  
  printf("Find primo > ");
  scanf("%d", &primo);
  
  auto isPrime = [primo]()->std::string{
    bool check = (
      !(primo > 2 && primo%2 == 0) &&   
      !(primo>=6 && primo%3 == 0) &&  
      !(primo%4 == 0) &&   
      !(primo >= 10 && primo%5 == 0) && 
      !(primo%2 == 0 && primo%3 == 0) && 
      !(primo > 10 && primo%7 == 0)     
    ) ? true : false;
    return (check) ? "primo" : "nao primo";
  };
  
  if(primo>1) std::cout << isPrime() << std::endl;
  
  return 0;
}