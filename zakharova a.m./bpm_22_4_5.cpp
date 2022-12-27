#include <iostream>
#include <string>
#include <fstream>
#include <vector>
int main()
{
    std::vector a;
// ввели вектор а;
// нужно ввести массив;ввели число показывающее колличество элементов масива
    int n;
    std::cin>>n>>std::endl;
   // for a[0] to a[n]{
        for ( int i=0;i<n;i++1){
//вводим каждый элемент массива 
        std::cin>>a[i]>>endl;
         // каждый элемент меняем местами 
        a[i]=a[n-1];
        }
        
    std ::cout<<a[i]<<std::endl;
    }
    
    // поработаем с одним числом 
    // для каждого элемента поменять цифры местами 
    std::vector l;
    int k;
    //колличество цифр в числе 
    std::cin>>k>>std::endl;
    for ( int r=1;r<k;r++1){
        
        
     //   if r=1 std::cout>>r>>std::endl;
     // if (r>1; l[r]=l[k])
    }
    
    
    // каждый элемент меняем местами 
    
