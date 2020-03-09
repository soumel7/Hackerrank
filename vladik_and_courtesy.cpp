#include <stdio.h>


using namespace std;

int main(){

    long long a ,b;
    scanf("%lld %lld",&a,&b);


    int counter=0;
    while (true)
    {    
        counter++;

        if(counter%2 != 0){
            a = a-counter;
        }
        if(counter%2 == 0){
            b = b-counter;
        }
 
        if(b-(counter+1)<0){
            printf("Valera");
            return 0;
            }       
       if(a-(counter+1)<0){
            printf("Vladik");
            return 0;
       }
        
    }
    

return 0;


}