#include <iostream>
#include <string>
int main (){
    int y=0;
    std::cin>>y;
    int n=y+1;
    for (;n<=9999;n+=1){
        int s1=n/1000;
        int s2=(n-1000*s1)/100;
        int s3=(n-1000*s1-100*s2)/10;
        int s4=n%10;
        bool b=s1!=s2;
        b =b && s2!=s3;
        b = b &&s3!=s4;
        b= b && s1!=s3;
        b= b && s1!=s4;
        b= b && s2!=s4;
        if (b==true){
            std:: cout <<n;
            break;
    }    
}
}
