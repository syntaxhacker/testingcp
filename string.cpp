//for string testing 
#include<bits/stdc++.h>
using namespace std;

int rand(int a , int b){
return a+ rand()%(b-a+1);
}

int main( int argc, char*argv[]){
// srand(atoi(argv[1]));
// int n = 1;
// set<char> used;
// for(int i = 0 ;i<n ; ++i){
//     char x;y
//     do{
//         x = char(rand(96,110));
//     }while(used.count(x));
//     cout << x << " ";
//     used.insert(x);
// }
for(int i = 97 ;i<=122 ;++i){
    cout << char(i);
}
puts("");
}
