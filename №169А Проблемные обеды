#include <iostream>
#include <string>
int main(){
    int n=0,k=0;
    std:: cin >> n>> k;
    int maxx = -10000000;
    for (int i=0; i < n;i++){
        int f=0, t=0;
        std:: cin >>f>>t;
        if (t>k && maxx <f){
            maxx=f;
        }
        if (t>k && maxx < f - (t-k)){
            maxx = f-(t-k);
        }
        std:: cout << maxx;   
}
}
